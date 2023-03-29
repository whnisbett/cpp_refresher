#include "gigasecond.h"

namespace gigasecond {

    boost::posix_time::ptime advance(boost::posix_time::ptime start_time)
    {
        boost::posix_time::time_duration GIGASEC = boost::posix_time::seconds(int(1e9));
        return start_time + GIGASEC;
    }

}  // namespace gigasecond
