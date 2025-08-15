#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
    const double EARTH_YEAR = 31557600.0;
    double result;

    switch (planet) {
        case MERCURY:
            result = (double)seconds / (0.2408467 * EARTH_YEAR);
            break;
        case VENUS:
            result = (double)seconds / (0.61519726 * EARTH_YEAR);
            break;
        case EARTH:
            result = (double)seconds / EARTH_YEAR;
            break;
        case MARS:
            result = (double)seconds / (1.8808158 * EARTH_YEAR);
            break;
        case JUPITER:
            result = (double)seconds / (11.862615 * EARTH_YEAR);
            break;
        case SATURN:
            result = (double)seconds / (29.447498 * EARTH_YEAR);
            break;
        case URANUS:
            result = (double)seconds / (84.016846 * EARTH_YEAR);
            break;
        case NEPTUNE:
            result = (double)seconds / (164.79132 * EARTH_YEAR);
            break;
        default:
            return -1.0f; 
    }

    return (float)result;
}
