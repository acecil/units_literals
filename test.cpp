
#include <iostream>
#include <boost/units/io.hpp>
#include <boost/units/systems/si/io.hpp>
#include <boost/units/cmath.hpp>

#include "literals.hpp"
#include "constants.hpp"

using namespace boost::units;
using namespace boost::units::literals;
using namespace boost::units::constants;

int main(void)
{
    std::cout << h << std::endl;
    std::cout << (e * e / (4_LD * M_PI_LD * eps0 * 0.15_nm * 0.15_nm)) << std::endl;
    std::cout << 1.5_km / 1_s << std::endl;
    auto v = 20.0_m / 1_s;
    std::cout << (1.0_g * c * c / std::sqrt(1_LD - ((v * v) / (c * c)))) << std::endl;
    
    return 0;
}
