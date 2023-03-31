#include "allergies.h"

namespace allergies
{
    allergy_test::allergy_test(int n)
    {
        determine_allergies_(n);
    }
    bool allergy_test::is_allergic_to(std::string allergen)
    {
        return (allergies_.find(allergen) != allergies_.end());
    }
    std::unordered_set<std::string> allergy_test::get_allergies()
    {
        return allergies_;
    }
    void allergy_test::determine_allergies_(int n)
    {
        for (auto &it : allergy_base_2_map_)
        {
            if ((it.first & n) != 0)
                allergies_.insert(it.second);
        }
    }

} // namespace allergies
