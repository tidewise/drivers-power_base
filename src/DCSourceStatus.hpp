#ifndef _DCSourceStatusPROJECT_DCSourceStatus_HPP_
#define _DCSourceStatusPROJECT_DCSourceStatus_HPP_

#include <base/Time.hpp>
#include <base/Float.hpp>

namespace power_base
{
    struct DCSourceStatus
    {
        base::Time time;
        float voltage = base::unknown<float>();
        float current = base::unknown<float>();
        float max_current = base::unknown<float>();
    };

} // end namespace power_base

#endif // _DCSourceStatusPROJECT_DCSourceStatus_HPP_
