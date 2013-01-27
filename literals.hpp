
#ifndef BOOST_UNITS_LITERALS_HPP
#define BOOST_UNITS_LITERALS_HPP

#include <boost/units/systems/si.hpp>

namespace boost {

namespace units {

namespace literals {

using namespace si;
    
#define BOOST_UNITS_LITERAL(suffix, unit, val, prefix, multiplier) \
quantity<unit, long double> operator "" _##prefix##suffix(long double x) \
{ \
    return quantity<unit, long double>(x * multiplier * val); \
} \
quantity<unit, unsigned long long> operator "" _##prefix##suffix(unsigned long long x) \
{ \
    return quantity<unit, unsigned long long>(x * multiplier * val); \
}
    
#define BOOST_UNITS_LITERAL_SET(suffix, unit, val) \
BOOST_UNITS_LITERAL(suffix, unit, val, Y, 1000000000000000000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, Z, 1000000000000000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, E, 1000000000000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, P, 1000000000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, T, 1000000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, G, 1000000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, M, 1000000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, k, 1000.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, , 1.0) \
BOOST_UNITS_LITERAL(suffix, unit, val, m, 0.001) \
BOOST_UNITS_LITERAL(suffix, unit, val, u, 0.000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, n, 0.00000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, p, 0.00000000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, f, 0.00000000000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, a, 0.00000000000000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, z, 0.00000000000000000001) \
BOOST_UNITS_LITERAL(suffix, unit, val, y, 0.00000000000000000000001)

BOOST_UNITS_LITERAL_SET(m, length, metre)
BOOST_UNITS_LITERAL_SET(g, mass, 0.001 * kilogram)
BOOST_UNITS_LITERAL_SET(s, time, second)
BOOST_UNITS_LITERAL_SET(A, current, ampere)
BOOST_UNITS_LITERAL_SET(K, temperature, kelvin)
BOOST_UNITS_LITERAL_SET(mol, amount, mole)
BOOST_UNITS_LITERAL_SET(cd, luminous_intensity, candela)
BOOST_UNITS_LITERAL_SET(Hz, frequency, hertz)
BOOST_UNITS_LITERAL_SET(rad, plane_angle, radian)
BOOST_UNITS_LITERAL_SET(sr, solid_angle, steradian)
BOOST_UNITS_LITERAL_SET(N, force, newton)
BOOST_UNITS_LITERAL_SET(Pa, pressure, pascal)
BOOST_UNITS_LITERAL_SET(J, energy, joule)
BOOST_UNITS_LITERAL_SET(W, power, watt)
BOOST_UNITS_LITERAL_SET(C, electric_charge, coulomb)
BOOST_UNITS_LITERAL_SET(V, electric_potential, volt)
BOOST_UNITS_LITERAL_SET(F, capacitance, farad)
//BOOST_UNITS_LITERAL_SET(ohm, resistance, ohm)
BOOST_UNITS_LITERAL_SET(S, conductance, siemens)
BOOST_UNITS_LITERAL_SET(Wb, magnetic_flux, weber)
BOOST_UNITS_LITERAL_SET(T, magnetic_flux_density, tesla)
BOOST_UNITS_LITERAL_SET(H, inductance, henry)
BOOST_UNITS_LITERAL_SET(degC, temperature, kelvin + 273.15 * kelvin)
BOOST_UNITS_LITERAL_SET(lm, luminous_flux, lumen)
BOOST_UNITS_LITERAL_SET(lx, illuminance, lux)
BOOST_UNITS_LITERAL_SET(Bq, activity, becquerel)
BOOST_UNITS_LITERAL_SET(Gy, absorbed_dose, gray)
BOOST_UNITS_LITERAL_SET(Sv, dose_equivalent, sievert)
BOOST_UNITS_LITERAL_SET(kat, catalytic_activity, katal)
BOOST_UNITS_LITERAL_SET(min, time, 60.0 * second)
BOOST_UNITS_LITERAL_SET(h, time, 60.0 * 60.0 * second)
BOOST_UNITS_LITERAL_SET(d, time, 60.0 * 60.0 * 24.0 * second)
BOOST_UNITS_LITERAL_SET(deg, plane_angle, M_PI / 180.0 * radian)
BOOST_UNITS_LITERAL_SET(l, volume, 0.001 * cubic_meter)
BOOST_UNITS_LITERAL_SET(L, volume, 0.001 * cubic_meter)
BOOST_UNITS_LITERAL_SET(t, mass, 1000.0 * kilogram)

} // namespace literals

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_LITERALS_HPP
