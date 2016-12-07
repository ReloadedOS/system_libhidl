/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// All static variables go here, to control initialization and
// destruction order in the library.

#include <hidl/Static.h>

namespace android {
namespace hardware {

Mutex gDefaultServiceManagerLock;
sp<android::hidl::manager::V1_0::IServiceManager> gDefaultServiceManager;

std::map<std::string, std::function<sp<IBinder>(void*)>> gBnConstructorMap{};

}   // namespace hardware
}   // namespace android
