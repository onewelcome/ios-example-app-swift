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

protocol FetchDeviceListInteractorProtocol: AnyObject {
    func fetchDeviceList()
}

class FetchDeviceListInteractor: FetchDeviceListInteractorProtocol {
    weak var fetchDeviceListPresenter: FetchDeviceListInteractorToPresenterProtocol?
    let decoder = JSONDecoder()
    private let userClient: UserClient = UserClientImplementation.shared //TODO: pass in init
    
    func fetchDeviceList() {
        //TODO:
//        let request = ONGResourceRequest(path: "devices", method: "GET")
//        userClient.fetchResource(request) { response, error in
//            if let error = error {
//                let mappedError = ErrorMapper().mapError(error)
//                self.fetchDeviceListPresenter?.fetchDeviceListFailed(mappedError)
//            } else {
//                if let data = response?.data,
//                    let deviceList = try? self.decoder.decode(Devices.self, from: data) {
//                    self.fetchDeviceListPresenter?.presentDeviceList(deviceList.devices)
//                }
//            }
//        }
    }
}

struct Devices: Codable {
    var devices: [Device]
}

struct Device: Codable {
    var name: String
    var id: String
    var application: String
}
