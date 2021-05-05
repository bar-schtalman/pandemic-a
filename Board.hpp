#pragma once
#include "City.hpp"
#include <iostream>
#include <map>

namespace pandemic{

    class Board{

        private:
            std::map<City,City> board;
            std::map<City,int> d;


        public:

            Board(){}

            static bool is_clean();

            int& operator[](City city);

            friend std::ostream& operator<<(std::ostream& output, const Board& board);

            void remove_cures();



    };
};