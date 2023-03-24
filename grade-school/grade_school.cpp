#include "grade_school.h"
#include <algorithm>

namespace grade_school {

    void school::add(std::string name, int grade) {
        std::vector<std::string> students = roster_[grade];
        students.insert(
            // finds first student in grade whose name is after current name
            std::upper_bound(begin(students), end(students), name),
            name
        );
    }

    std::map<int, std::vector<std::string>> school::roster() const {
        return roster_;
    }

    }

}  // namespace grade_school
