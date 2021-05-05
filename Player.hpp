#pragma once
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <string>

namespace pandemic{
    class Player{

        private:
        Board board;
        City city;

        public:
        Player(Board& board,City city){
            // this -> board = board;
            // this -> city = city;
        }

        
         Player& drive(City city);
         Player& fly_direct(City city);
         Player& fly_charter(City city);
         Player& fly_shuttle(City city);
         Player& build();
         Player& discover_cure(Color color);
         Player& treat(City city);


        //nothing to do down here
        static std::string role();
        Player& take_card(City city);

    };

}