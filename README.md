# Units Literals

User defined literals for the Boost Units library.

## Literals

User defined literals for almost all the S.I. units are defined including variants for each S.I. prefix.

* `auto d = 3.0_m;` // 3 metres
* `auto acc = 4.8_km / 1.0_h / 1.0h;` // 4.8 kilometres per square hour
* `auto ti = 9.11_ps;` // 9.11 pico seconds

These are defined in the `literals.hpp` header in the `boost::units::literals` namespace.

## Constants

Various constants are defined (making use of the user defined units literals).

* `const auto c = 299792458.0_m / 1_s;` // Speed of light in a vacuum
* `const auto k = R / NA;` // Boltzmann's constant

These are defined in the `constants.hpp` header in the `boost::units::constants` namespace.

## Examples

The `test.cpp` file contains a few examples.

