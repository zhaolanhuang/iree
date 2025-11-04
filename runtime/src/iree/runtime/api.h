// Copyright 2021 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef IREE_RUNTIME_API_H_
#define IREE_RUNTIME_API_H_

// Lower-level APIs:
#include "iree/base/api.h"  // IWYU pragma: export
#include "iree/hal/api.h"   // IWYU pragma: export
#include "iree/vm/api.h"    // IWYU pragma: export

// Runtime API:
#include "iree/runtime/call.h"      // IWYU pragma: export
#include "iree/runtime/instance.h"  // IWYU pragma: export
#include "iree/runtime/session.h"   // IWYU pragma: export

#include "iree/hal/local/executable_library.h"
#include "iree/hal/drivers/local_sync/sync_device.h"
#include "iree/hal/drivers/local_task/task_device.h"
#include "iree/task/api.h"
#include "iree/hal/local/loaders/static_library_loader.h"

#endif  // IREE_RUNTIME_API_H_
