#include <boost/test/unit_test.hpp>
#include <power_base/Dummy.hpp>

using namespace power_base;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    power_base::DummyClass dummy;
    dummy.welcome();
}
