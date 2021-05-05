#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic{
    
    class Researcher : public Player{
        public:

        Researcher(Board board, City city):Player(board,city){}

        Player discover_cure(City city);

    };
}