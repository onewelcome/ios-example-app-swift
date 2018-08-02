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

protocol AppRouterProtocol: class {
    var startupPresenter: StartupPresenterProtocol { get }
    var welcomePresenter: WelcomePresenterProtocol { get }
    var dashboardPresenter: DashboardPresenterProtocol { get }
    var errorPresenter: ErrorPresenterProtocol { get }
    var authenticatorsPresenter: AuthenticatorsPresenterProtocol { get }

    func popToWelcomeViewWithLogin()
    func popToWelcomeViewControllerWithRegisterUser()
    func setupStartupPresenter()
    func setupWelcomePresenter()
    func setupDashboardPresenter(authenticatedUserProfile: ONGUserProfile)
    func setupErrorAlert(error: AppError)
    func setupErrorAlertWithRetry(error: AppError, retryHandler: @escaping ((UIAlertAction) -> Void))
    func setupAuthenticatorsPresenter()
    func popToDashboardView()
}

class AppRouter: AppRouterProtocol {
    var startupPresenter: StartupPresenterProtocol
    var welcomePresenter: WelcomePresenterProtocol
    var dashboardPresenter: DashboardPresenterProtocol
    var errorPresenter: ErrorPresenterProtocol
    var authenticatorsPresenter: AuthenticatorsPresenterProtocol

    init(startupPresenter: StartupPresenterProtocol,
         welcomePresenter: WelcomePresenterProtocol,
         dashboardPresenter: DashboardPresenterProtocol,
         errorPresenter: ErrorPresenterProtocol,
         authenticatorsPresenter: AuthenticatorsPresenterProtocol) {
        self.startupPresenter = startupPresenter
        self.welcomePresenter = welcomePresenter
        self.dashboardPresenter = dashboardPresenter
        self.errorPresenter = errorPresenter
        self.authenticatorsPresenter = authenticatorsPresenter
    }

    func popToWelcomeViewWithLogin() {
        welcomePresenter.popToWelcomeViewControllerWithLogin()
    }
    
    func popToDashboardView() {
        dashboardPresenter.popToDashboardView()
    }

    func popToWelcomeViewControllerWithRegisterUser() {
        welcomePresenter.popToWelcomeViewControllerWithRegisterUser()
    }

    func setupStartupPresenter() {
        startupPresenter.oneigniSDKStartup()
    }

    func setupWelcomePresenter() {
        welcomePresenter.presentWelcomeView()
    }

    func setupDashboardPresenter(authenticatedUserProfile: ONGUserProfile) {
        dashboardPresenter.presentDashboardView(authenticatedUserProfile: authenticatedUserProfile)
    }

    func setupErrorAlert(error: AppError) {
        errorPresenter.showErrorAlert(error: error)
    }

    func setupErrorAlertWithRetry(error: AppError, retryHandler: @escaping ((UIAlertAction) -> Void)) {
        errorPresenter.showErrorAlertWithRetryAction(error: error, retryHandler: retryHandler)
    }
    
    func setupAuthenticatorsPresenter() {
        authenticatorsPresenter.presentAuthenticatorsView()
    }
}
