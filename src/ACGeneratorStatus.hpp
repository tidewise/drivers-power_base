#ifndef _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_
#define _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_

#include <power_base/ACSourceStatus.hpp>
#include <base/Float.hpp>

namespace power_base
{
    struct ACGeneratorStatus : public ACSourceStatus
    {
        // The generator rotational velocity in rad/s (SI)
        float generator_rotational_velocity = base::unknown<float>();
    };

} // end namespace power_base

#endif // _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_
