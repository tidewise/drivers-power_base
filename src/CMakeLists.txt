rock_library(power_base
    HEADERS DCSourceStatus.hpp ACSourceStatus.hpp ACGeneratorStatus.hpp BatteryStatus.hpp
            samples/Voltage.hpp samples/Current.hpp
    DEPS_PKGCONFIG base-types)
