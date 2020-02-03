#include "ACSourceStatus.hpp"

#ifndef _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_
#define _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_

namespace power_base
{
    class ACGeneratorStatus : public ACSourceStatus
    {
        public:
            float generator_rotation_velocity;
    };

} // end namespace power_base

#endif // _ACGeneratorStatusPROJECT_ACGeneratorStatus_HPP_
