#ifndef _DCSourceStatusPROJECT_DCSourceStatus_HPP_
#define _DCSourceStatusPROJECT_DCSourceStatus_HPP_

#include <base/Time.hpp>

namespace power_base
{
    struct DCSourceStatus
    {
        base::Time time;
        float voltage;
        float current;
    };

} // end namespace power_base

#endif // _DCSourceStatusPROJECT_DCSourceStatus_HPP_
