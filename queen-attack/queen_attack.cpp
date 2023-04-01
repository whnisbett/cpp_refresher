#include "queen_attack.h"
#include <stdexcept>
#include <algorithm>

namespace queen_attack
{

    chess_board::chess_board(std::pair<int, int> queen_white, std::pair<int, int> queen_black)
    {
        white_ = queen_white;
        black_ = queen_black;
        assert_valid_position();
    }

    std::pair<int, int> chess_board::white() const
    {
        return white_;
    }

    std::pair<int, int> chess_board::black() const
    {
        return black_;
    }

    bool chess_board::can_attack() const
    {
        // search diagonal 1
        return can_attack_main_diagonal() || can_attack_secondary_diagonal() || can_attack_row() || can_attack_column();
    }

    bool chess_board::can_attack_main_diagonal() const
    {
        int coordinate_offset = std::min(white_.first, white_.second);
        std::pair<int, int> white_search_square = std::make_pair(white_.first - coordinate_offset, white_.second - coordinate_offset);
        while (is_valid_position(white_search_square))
        {
            if (black_ == white_search_square)
                return true;
            white_search_square = std::make_pair(white_search_square.first + 1, white_search_square.second + 1);
        }
        return false;
    }

    bool chess_board::can_attack_secondary_diagonal() const
    {
        // search diagonal 2
        int coordinate_offset = std::min(white_.first, 7 - white_.second);
        std::pair<int, int> white_search_square = std::make_pair(white_.first - coordinate_offset, white_.second + coordinate_offset);
        while (is_valid_position(white_search_square))
        {
            if (black_ == white_search_square)
                return true;
            white_search_square = std::make_pair(white_search_square.first + 1, white_search_square.second - 1);
        }
        return false;
    }

    bool chess_board::can_attack_column() const
    {
        // search column
        std::pair<int, int> white_search_square = std::make_pair(0, white_.second);
        while (is_valid_position(white_search_square))
        {
            if (black_ == white_search_square)
                return true;
            white_search_square = std::make_pair(white_search_square.first + 1, white_search_square.second);
        }
        return false;
    }

    bool chess_board::can_attack_row() const
    {
        // search row
        std::pair<int, int> white_search_square = std::make_pair(white_.first, 0);
        while (is_valid_position(white_search_square))
        {
            if (black_ == white_search_square)
                return true;
            white_search_square = std::make_pair(white_search_square.first, white_search_square.second + 1);
        }
        return false;
    }

    void chess_board::assert_valid_position() const
    {
        if (!is_valid_position(white_) || !is_valid_position(black_))
            throw std::domain_error("Both queens must be positioned on a valid square.");
        if (black_ == white_)
            throw std::domain_error("Both queens must be on distinct squares.");
    }

    bool chess_board::is_valid_position(std::pair<int, int> square) const
    {
        if (square.first >= 0 && square.first < 8 && square.second >= 0 && square.second < 8)
            return true;
        return false;
    }
} // namespace queen_attack
