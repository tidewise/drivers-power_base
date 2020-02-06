#ifndef _ACSourceStatusPROJECT_ACSourceStatus_HPP_
#define _ACSourceStatusPROJECT_ACSourceStatus_HPP_

#include <base/Time.hpp>

namespace power_base
{
    struct ACSourceStatus
    {
        base::Time time;
        float voltage;
        float current;
        float frequency;
    };
} // end namespace power_base

#endif // _ACSourceStatusPROJECT_ACSourceStatus_HPP_
