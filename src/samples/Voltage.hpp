#ifndef POWER_BASE_SAMPLES_VOLTAGE_HPP
#define POWER_BASE_SAMPLES_VOLTAGE_HPP

#include <base/Float.hpp>
#include <base/Time.hpp>

namespace power_base {
    namespace samples {
        struct Voltage {
            base::Time time;
            double value = base::unknown<double>();
        };
    }
}

#endif
