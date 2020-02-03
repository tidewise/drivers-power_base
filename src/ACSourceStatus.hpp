#ifndef _ACSourceStatusPROJECT_ACSourceStatus_HPP_
#define _ACSourceStatusPROJECT_ACSourceStatus_HPP_

#include <base/Time.hpp>

namespace power_base
{
    class ACSourceStatus
    {
        public:
            float voltage;
            float current;
            float frequency;
            base::Time time;
    };
} // end namespace power_base

#endif // _ACSourceStatusPROJECT_ACSourceStatus_HPP_
