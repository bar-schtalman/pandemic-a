#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic {
    
    class Scientist : public Player{
        public:

            Scientist(Board board, City city, int cards ):Player(board,city){}

            Player discover_cure(City city);
    };
}