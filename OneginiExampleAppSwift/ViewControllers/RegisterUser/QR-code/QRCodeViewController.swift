//
// Copyright (c) 2018 Onegini. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import UIKit
import AVFoundation

protocol QRCodeEntityProtocol {
    var cancelled: Bool { get set }
    var qrCodeData: String? { get set }
}

class QRCodeViewController: UIViewController {

    @IBOutlet weak var errorLabel: UILabel!
    @IBOutlet weak var qrCodeView: UIView!
    
    var captureSession: AVCaptureSession!
    var previewLayer: AVCaptureVideoPreviewLayer!
    
    var registerUserEntity: QRCodeEntityProtocol
    let registerUserViewToPresenterProtocol: RegisterUserViewToPresenterProtocol
    
    init(registerUserEntity: QRCodeEntityProtocol, registerUserViewToPresenterProtocol: RegisterUserViewToPresenterProtocol) {
        self.registerUserEntity = registerUserEntity
        self.registerUserViewToPresenterProtocol = registerUserViewToPresenterProtocol
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.black
        captureSession = AVCaptureSession()
        
        guard let videoCaptureDevice = AVCaptureDevice.default(for: .video) else { return }
        let videoInput: AVCaptureDeviceInput
        
        do {
            videoInput = try AVCaptureDeviceInput(device: videoCaptureDevice)
        } catch {
            return
        }
        
        if (captureSession.canAddInput(videoInput)) {
            captureSession.addInput(videoInput)
        } else {
            failed()
            return
        }
        
        let metadataOutput = AVCaptureMetadataOutput()
        
        if (captureSession.canAddOutput(metadataOutput)) {
            captureSession.addOutput(metadataOutput)
            
            metadataOutput.setMetadataObjectsDelegate(self, queue: DispatchQueue.main)
            metadataOutput.metadataObjectTypes = [.qr]
        } else {
            failed()
            return
        }
        
        previewLayer = AVCaptureVideoPreviewLayer(session: captureSession)
        previewLayer.frame = qrCodeView.layer.bounds
        previewLayer.videoGravity = .resizeAspectFill
        qrCodeView.layer.addSublayer(previewLayer)
        
        captureSession.startRunning()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        if (captureSession?.isRunning == false) {
            captureSession.startRunning()
        }
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        if (captureSession?.isRunning == true) {
            captureSession.stopRunning()
        }
    }
    
    func failed() {
        captureSession = nil
        registerUserViewToPresenterProtocol.handleQRCode()
    }
    
    fileprivate func shakeLabel(_ label: UILabel) {
        let animation = CABasicAnimation(keyPath: "position")
        animation.duration = 0.1
        animation.repeatCount = 2
        animation.autoreverses = true
        animation.fromValue = NSValue(cgPoint: CGPoint(x: label.center.x - 10, y: label.center.y))
        animation.toValue = NSValue(cgPoint: CGPoint(x: label.center.x + 10, y: label.center.y))
        
        label.layer.add(animation, forKey: "position")
    }
    
    func setupErrorLabel(_ errorMessage: String?) {
        captureSession.startRunning()
        errorLabel.text = errorMessage
        shakeLabel(errorLabel)
    }
    
    @IBAction func cancel(_ sender: Any) {
        registerUserEntity.cancelled = true
        registerUserViewToPresenterProtocol.handleQRCode()
    }
    
}

extension QRCodeViewController: AVCaptureMetadataOutputObjectsDelegate {
    
    func metadataOutput(_ output: AVCaptureMetadataOutput, didOutput metadataObjects: [AVMetadataObject], from connection: AVCaptureConnection) {
        captureSession.stopRunning()
        
        if let metadataObject = metadataObjects.first {
            guard let readableObject = metadataObject as? AVMetadataMachineReadableCodeObject else { return }
            guard let stringValue = readableObject.stringValue else { return }
            registerUserEntity.qrCodeData = stringValue
            registerUserViewToPresenterProtocol.handleQRCode()
        }
        
    }
}
