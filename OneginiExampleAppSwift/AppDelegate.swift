//
// Copyright (c) 2016 Onegini. All rights reserved.
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

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate, UINavigationControllerDelegate {

    var window: UIWindow?
    var navigationController = AppNavigationController.shared
    var appRouter = AppAssembly.shared.resolver.resolve(AppRouterProtocol.self)
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        setupWindow()
        oneginiSDKStartup()
        
        return true
    }
    
    func setupWindow() {
        window = UIWindow(frame: UIScreen.main.bounds)
        window?.backgroundColor = UIColor.white
        window?.makeKeyAndVisible()
        navigationController.navigationBar.setBackgroundImage(#imageLiteral(resourceName: "background"), for: .default)
        window?.rootViewController = navigationController
        navigationController.delegate = self
    }
    
    func oneginiSDKStartup() {
        guard let appRouter = appRouter else { fatalError() }
        appRouter.setupStartupPresenter()
    }

}

