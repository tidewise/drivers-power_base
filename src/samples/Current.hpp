#ifndef POWER_BASE_SAMPLES_CURRENT_HPP
#define POWER_BASE_SAMPLES_CURRENT_HPP

#include <base/Float.hpp>
#include <base/Time.hpp>

namespace power_base {
    namespace samples {
        struct Current {
            base::Time time;
            double value = base::unknown<double>();
        };
    }
}

#endif
