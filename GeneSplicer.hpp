#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic{

    class GeneSplicer : public Player {

        public:
            GeneSplicer(Board board, City city):Player(board,city){}

            Player discover_cure(City city);
    };
}