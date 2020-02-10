#ifndef _BatteryStatusPROJECT_BatteryStatus_HPP_
#define _BatteryStatusPROJECT_BatteryStatus_HPP_

#include <power_base/DCSourceStatus.hpp>
#include <base/Temperature.hpp>
#include <base/Float.hpp>

namespace power_base
{
    struct BatteryStatus : public DCSourceStatus
    {
        // Battery temperature
        base::Temperature temperature;

        // Percentage (0-1) of the remaining charge
        float charge = base::unknown<float>();
    };

} // end namespace power_base

#endif // _BatteryStatusPROJECT_BatteryStatus_HPP_
