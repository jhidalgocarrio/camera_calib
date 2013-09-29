#include <boost/test/unit_test.hpp>
#include <camera_calib/Dummy.hpp>

using namespace camera_calib;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    camera_calib::DummyClass dummy;
    dummy.welcome();
}
