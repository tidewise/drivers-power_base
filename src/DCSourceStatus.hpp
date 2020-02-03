#ifndef _DCSourceStatusPROJECT_DCSourceStatus_HPP_
#define _DCSourceStatusPROJECT_DCSourceStatus_HPP_

#include <base/Time.hpp>

namespace power_base
{
    class DCSourceStatus
    {
        public:
            float voltage;
            float current;
            base::Time time;
    };

} // end namespace power_base

#endif // _DCSourceStatusPROJECT_DCSourceStatus_HPP_
