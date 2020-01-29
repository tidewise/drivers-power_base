rock_library(power_base
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(power_base_bin Main.cpp
    DEPS power_base)

