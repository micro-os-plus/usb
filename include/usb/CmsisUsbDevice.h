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

#ifndef USB_CMSIS_USB_DEVICE_H_
#define USB_CMSIS_USB_DEVICE_H_

// ----------------------------------------------------------------------------

#include <stdint.h>

// ----------------------------------------------------------------------------

// Forward definitions to avoid "Driver_USBD.h"
extern "C"
{
  typedef struct _ARM_DRIVER_USBD const ARM_DRIVER_USBD;

  typedef void
  (*ARM_USBD_SignalDeviceEvent_t) (uint32_t event);

  typedef void
  (*ARM_USBD_SignalEndpointEvent_t) (uint8_t ep_addr, uint32_t event);
}

// ----------------------------------------------------------------------------

namespace os
{
  namespace io
  {
    // ------------------------------------------------------------------------

    class CmsisUsbDevice
    {
      // ----------------------------------------------------------------------

    public:
      CmsisUsbDevice (ARM_DRIVER_USBD* driver,
                      ARM_USBD_SignalDeviceEvent_t deviceEventCallBack,
                      ARM_USBD_SignalEndpointEvent_t endpointEventCallBack);

      virtual
      ~CmsisUsbDevice ();

      // ----------------------------------------------------------------------

    private:
      ARM_DRIVER_USBD* fDriver;
      ARM_USBD_SignalDeviceEvent_t fDeviceEventCallBack;
      ARM_USBD_SignalEndpointEvent_t fEndpointEventCallBack;
    };

  } /* namespace io */
} /* namespace os */

#endif /* USB_CMSIS_USB_DEVICE_H_ */
