#include "DCSourceStatus.hpp"

#ifndef _BatteryStatusPROJECT_BatteryStatus_HPP_
#define _BatteryStatusPROJECT_BatteryStatus_HPP_

#include <base/Temperature.hpp>

namespace power_base
{
    struct BatteryStatus : public DCSourceStatus
    {
        // Batery temperature
        base::Temperature temperature;

        // Percentage (0-1) of the remaining charge
        float charge;
    };

} // end namespace power_base

#endif // _BatteryStatusPROJECT_BatteryStatus_HPP_
