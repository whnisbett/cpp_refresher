#include "grade_school.h"
#include <algorithm>

namespace grade_school
{

    void school::add(std::string name, int grade)
    {
        std::vector<std::string>& students = roster_[grade];
        students.insert(
            // finds first student in grade whose name is after current name
            std::upper_bound(begin(students), end(students), name),
            name
        );
    }

    std::map<int, std::vector<std::string>> school::roster() const
    {
        return roster_;
    }

    std::vector<std::string> school::grade(int grade) const
    {
        std::vector<std::string> empty_vector {};
        auto it {roster_.find(grade)};
        if (it == roster_.end())
            return empty_vector;
        return it->second;
    }

} // namespace grade_school
