#include "DCSourceStatus.hpp"

#ifndef _BatteryStatusPROJECT_BatteryStatus_HPP_
#define _BatteryStatusPROJECT_BatteryStatus_HPP_

namespace power_base
{
    class BatteryStatus : public DCSourceStatus
    {
        public:
            float temperature;
            float charge;
    };

} // end namespace power_base

#endif // _BatteryStatusPROJECT_BatteryStatus_HPP_
