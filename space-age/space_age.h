#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

class space_age {
    private:
        double secs_;
    public:
        space_age(double secs);
        double seconds();
        double on_earth();
        double on_mercury();
        double on_venus();
        double on_mars();
        double on_jupiter();
        double on_saturn();
        double on_uranus();
        double on_neptune();
};

}  // namespace space_age

#endif // SPACE_AGE_H