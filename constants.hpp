
#ifndef BOOST_UNITS_CONSTANTS_HPP
#define BOOST_UNITS_CONSTANTS_HPP

#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include "literals.hpp"

namespace boost {

namespace units {

namespace constants {

using namespace si;
using namespace literals;

long double operator "" _LD(unsigned long long x) { return static_cast<long double>(x); }
long double operator "" _LD(long double x) { return x; }

const auto M_PI_LD = static_cast<long double>(M_PI);
const auto c = 299792458.0_m / 1_s;
const auto G = 6.67384E-11_m * 1_m * 1_m / 1_kg / 1_s / 1_s;
const auto h = 6.62606957E-34_J * 1_s;
const auto hbar = h / 2_LD * M_PI_LD;
const auto u0 = 4E-7_N * M_PI_LD / 1_A / 1_A;
const auto eps0 = 1_LD / u0 / c / c;
const auto Z0 = u0 * c;
const auto ke = 1_LD / (4_LD * M_PI * eps0);
const auto e = 1.602176565E-19_C;
const auto me = 9.10938291E-31_kg;
const auto mp = 1.672621777E-27_kg;
const auto uB = e * hbar / (2_LD * me);
const auto G0 = 2_LD * e * e / h;
const auto KJ = 2_LD * e / h;
const auto uN = e * h / (2_LD * mp);
const auto RK = h / (e * e);
const auto alpha = u0 * e * e * c / (2_LD * h);
const auto Rinf = alpha * alpha * me * c / (2_LD * h);
const auto a0 = alpha / (4_LD * M_PI_LD * Rinf);
const auto re = e * e / (4_LD * M_PI_LD * eps0 * me * c * c);
const auto Eh = 2_LD * Rinf * h * c;
const auto R = 8.3144621_J / 1_K / 1_mol;
const auto atm = 101325_Pa;
const auto lP = sqrt(hbar * G / (c * c * c));
const auto mP = sqrt(hbar * c / G);
const auto tP = sqrt(hbar * G / (c * c * c * c * c));
const auto NA = 6.02214129E23_LD / 1.0_mol;
const auto k = R / NA;
const auto kB = k;
const auto F = NA * e;
const auto c1 = 2_LD * M_PI * h * c * c;
const auto c2 = h * c / k;
const auto sigma = M_PI_LD * M_PI_LD * k * k * k * k / (60_LD * hbar * hbar * hbar * c * c);
const auto b = h * c / (4.965114231_LD * k);
const auto g = 9.80665_m / 1_s / 1_s;

} // namespace constants

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_CONSTANTS_HPP
