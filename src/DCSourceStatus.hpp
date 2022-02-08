#ifndef _DCSourceStatusPROJECT_DCSourceStatus_HPP_
#define _DCSourceStatusPROJECT_DCSourceStatus_HPP_

#include <base/Time.hpp>
#include <base/Float.hpp>

namespace power_base
{
    /** Electrical status of a DC source/sink */
    struct DCSourceStatus
    {
        base::Time time;

        /** Source voltage */
        float voltage = base::unknown<float>();

        /** Current in A
         *
         * Positive if acting as a source, negative as a sink (e.g. recharging a
         * battery)
         */
        float current = base::unknown<float>();

        /** Maximum current this source can provide (in A)
         */
        float max_current = base::unknown<float>();
    };

} // end namespace power_base

#endif // _DCSourceStatusPROJECT_DCSourceStatus_HPP_
