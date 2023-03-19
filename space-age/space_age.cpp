#include "space_age.h"

namespace space_age {

const double earth_years_per_second = 1.0/31557600.0;
const double mercury_factor = 0.2408467;
const double venus_factor = 0.61519726;
const double mars_factor = 1.8808158;
const double jupiter_factor = 11.862615;
const double saturn_factor = 29.447498;
const double uranus_factor = 84.016846;
const double neptune_factor = 164.79132;

space_age::space_age(long secs) : secs_(secs)
{
}

long space_age::seconds() const
{
    return secs_;
}

double space_age::on_earth() const
{
    return seconds() * earth_years_per_second;
}

double space_age::on_jupiter() const
{
    return on_earth() / jupiter_factor;
}

double space_age::on_mars() const
{
    return on_earth() / mars_factor;
}

double space_age::on_venus() const
{
    return on_earth() / venus_factor;
}

double space_age::on_mercury() const
{
    return on_earth() / mercury_factor;
}

double space_age::on_neptune() const
{
    return on_earth() / neptune_factor;
}

double space_age::on_saturn() const
{
    return on_earth() / saturn_factor;
}

double space_age::on_uranus() const
{
    return on_earth() / uranus_factor;
}

}  // namespace space_age
