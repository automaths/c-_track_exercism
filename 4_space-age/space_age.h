#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <iostream>

namespace space_age {

    class space_age {

        double earth_age;
        long unsigned int time;

        public:

        space_age(long unsigned int seconds) {
            this->time = seconds;
            this->earth_age = ((double)seconds / 31557600);
        }
        long unsigned int seconds() const {
            return this->time;
        }
        double on_mercury() const {
            // std::cout << "mercury: " << this->earth_age / 0.2408467 << std::endl;
            return (this->earth_age / 0.2408467);
        }
        double on_venus() const {
            return (this->earth_age / 0.61519726);
        }
        double on_earth() const {
            return (this->earth_age);
        }
        double on_mars() const {
            return (this->earth_age / 1.8808158);
        }
        double on_jupiter() const {
            return (this->earth_age / 11.862615);
        }
        double on_saturn() const {
            return (this->earth_age / 29.447498);
        }
        double on_uranus() const {
            return (this->earth_age / 84.016846);
        }
        double on_neptune() const {
            return (this->earth_age / 164.79132);
        }
    };

}  // namespace space_age

#endif // SPACE_AGE_H