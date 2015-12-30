/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2015 Liviu Ionescu.
 *
 * µOS++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, version 3.
 *
 * µOS++ is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "usb/CmsisUsbDevice.h"

// ----------------------------------------------------------------------------

namespace os
{
  namespace io
  {
    // ----------------------------------------------------------------------------

    CmsisUsbDevice::CmsisUsbDevice (
        ARM_DRIVER_USBD* driver,
        ARM_USBD_SignalDeviceEvent_t deviceEventCallBack,
        ARM_USBD_SignalEndpointEvent_t endpointEventCallBack)
    {
      fDriver = driver;
      fDeviceEventCallBack = deviceEventCallBack;
      fEndpointEventCallBack = endpointEventCallBack;
    }

    CmsisUsbDevice::~CmsisUsbDevice ()
    {
      // TODO Auto-generated destructor stub
    }

  } /* namespace io */
} /* namespace os */
