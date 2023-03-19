#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

class space_age {
    private:
        double secs_;
    public:
        space_age(long secs);
        long seconds() const;
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
};

}  // namespace space_age

#endif // SPACE_AGE_H