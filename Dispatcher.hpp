#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic{

    class Dispatcher : public Player{

        public:
            Dispatcher(Board board, City city):Player(board,city){}

            Player fly_direct(City city);

    };
}