#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <utility>

namespace queen_attack
{

    class chess_board
    {
    private:
        std::pair<int, int> white_;
        std::pair<int, int> black_;
        void assert_valid_position() const;
        bool is_valid_position(std::pair<int, int> square) const;
        bool can_attack_row() const;
        bool can_attack_column() const;
        bool can_attack_main_diagonal() const;
        bool can_attack_secondary_diagonal() const;

    public:
        chess_board(std::pair<int, int> queen_white, std::pair<int, int> queen_black);
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;
        bool can_attack() const;
    };

} // namespace queen_attack

#endif // QUEEN_ATTACK_H