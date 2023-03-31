#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
#include <unordered_map>

namespace allergies
{

    class allergy_test
    {
    private:
        std::unordered_set<std::string> allergies_{};
        std::unordered_map<unsigned int, std::string> allergy_base_2_map_{
            {1, "eggs"},
            {2, "peanuts"},
            {4, "shellfish"},
            {8, "strawberries"},
            {16, "tomatoes"},
            {32, "chocolate"},
            {64, "pollen"},
            {128, "cats"}};
        void determine_allergies_(int n);
    public:
        allergy_test(int n);
        bool is_allergic_to(std::string);
        std::unordered_set<std::string> get_allergies();
    };

} // namespace allergies

#endif // ALLERGIES_H