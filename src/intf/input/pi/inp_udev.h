// Copyright 2015 Akop Karapetyan
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

#ifndef PI_UDEV_H
#define PI_UDEV_H

int udevInit();
int udevShutdown();

int udevJoystickCount();
int udevMouseCount();

const char* udevDeviceName(int index);
const char* udevDeviceId(int index);

#endif