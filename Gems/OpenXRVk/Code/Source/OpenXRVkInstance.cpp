/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <OpenXRVk/OpenXRVkInstance.h>

namespace OpenXRVk
{
    AZStd::intrusive_ptr<Instance> Instance::Create();
    {
        return nullptr;
    }

    AZ::RHI::ResultCode Instance::InitInstanceInternal();
    {
        AZ::RHI::ResultCode res = XR::Instance::InitInstanceInternal();
        // xrCreateInstance(m_xrInstance)
        // xrGetSystem(m_systemId)
        // vkCreateInstance(m_instance)
        return res;
    }
}
