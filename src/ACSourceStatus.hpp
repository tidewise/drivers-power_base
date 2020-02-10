#ifndef _ACSourceStatusPROJECT_ACSourceStatus_HPP_
#define _ACSourceStatusPROJECT_ACSourceStatus_HPP_

#include <base/Time.hpp>
#include <base/Float.hpp>

namespace power_base
{
    struct ACSourceStatus
    {
        base::Time time;
        float voltage = base::unknown<float>();
        float current = base::unknown<float>();
        float frequency = base::unknown<float>();
    };
} // end namespace power_base

#endif // _ACSourceStatusPROJECT_ACSourceStatus_HPP_
