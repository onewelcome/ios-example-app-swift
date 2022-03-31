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

import Foundation

struct MobileAuthQueue {
    fileprivate var list = [MobileAuthRequest]()
    
    private let userClient: UserClient = UserClientImplementation.shared //TODO: pass in init
    
    mutating func enqueue(_ mobileAuthRequest: MobileAuthRequest) {
        if list.isEmpty {
            handleMobileAuthRequest(mobileAuthRequest)
        }
        list.append(mobileAuthRequest)
    }

    mutating func dequeue() {
        if !list.isEmpty {
            list.removeFirst()
            if let firstElement = list.first {
                handleMobileAuthRequest(firstElement)
            }
        }
    }

    fileprivate func handleMobileAuthRequest(_ mobileAuthRequest: MobileAuthRequest) {
        if let pendingTransaction = mobileAuthRequest.pendingTransaction {
            userClient.handlePendingPushMobileAuth(request: pendingTransaction, delegate: mobileAuthRequest.delegate)
        } else if let otp = mobileAuthRequest.otp {
            userClient.handleOTPMobileAuth(otp: otp, delegate: mobileAuthRequest.delegate)
        }
    }
}
