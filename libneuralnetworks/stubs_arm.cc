//
// Copyright (C) 2020 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// clang-format off
#include "native_bridge_support/vdso/interceptable_functions.h"

DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksBurst_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksBurst_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_createForDevices);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_finish);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_setCaching);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksCompilation_setPreference);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksDevice_getExtensionSupport);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksDevice_getFeatureLevel);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksDevice_getName);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksDevice_getType);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksDevice_getVersion);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksEvent_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksEvent_wait);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_burstCompute);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_compute);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_getDuration);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_getOutputOperandDimensions);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_getOutputOperandRank);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_setInput);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_setInputFromMemory);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_setMeasureTiming);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_setOutput);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_setOutputFromMemory);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksExecution_startCompute);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_addInputRole);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_addOutputRole);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_finish);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemoryDesc_setDimensions);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemory_copy);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemory_createFromAHardwareBuffer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemory_createFromDesc);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemory_createFromFd);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksMemory_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_addOperand);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_addOperation);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_finish);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_free);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_getExtensionOperandType);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_getExtensionOperationType);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_getSupportedOperationsForDevices);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_identifyInputsAndOutputs);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_relaxComputationFloat32toFloat16);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_setOperandExtensionData);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_setOperandSymmPerChannelQuantParams);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_setOperandValue);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworksModel_setOperandValueFromMemory);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworks_getDevice);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ANeuralNetworks_getDeviceCount);

static void __attribute__((constructor(0))) init_stub_library() {
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksBurst_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksBurst_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_createForDevices);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_finish);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_setCaching);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksCompilation_setPreference);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksDevice_getExtensionSupport);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksDevice_getFeatureLevel);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksDevice_getName);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksDevice_getType);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksDevice_getVersion);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksEvent_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksEvent_wait);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_burstCompute);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_compute);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_getDuration);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_getOutputOperandDimensions);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_getOutputOperandRank);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_setInput);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_setInputFromMemory);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_setMeasureTiming);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_setOutput);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_setOutputFromMemory);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksExecution_startCompute);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_addInputRole);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_addOutputRole);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_finish);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemoryDesc_setDimensions);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemory_copy);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemory_createFromAHardwareBuffer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemory_createFromDesc);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemory_createFromFd);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksMemory_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_addOperand);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_addOperation);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_finish);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_free);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_getExtensionOperandType);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_getExtensionOperationType);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_getSupportedOperationsForDevices);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_identifyInputsAndOutputs);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_relaxComputationFloat32toFloat16);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_setOperandExtensionData);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_setOperandSymmPerChannelQuantParams);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_setOperandValue);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworksModel_setOperandValueFromMemory);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworks_getDevice);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libneuralnetworks.so", ANeuralNetworks_getDeviceCount);
}
// clang-format on
