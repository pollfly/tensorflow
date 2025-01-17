/* Copyright 2022 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/core/common_runtime/next_pluggable_device/next_pluggable_device_api.h"

namespace tensorflow {

static const TFNPD_Api* tfnpd_api;

const TFNPD_Api* TfnpdApi() { return tfnpd_api; }

void SetTfnpdApi(const TFNPD_Api* api) { tfnpd_api = api; }

}  // namespace tensorflow
