#include "Scientist.hpp"

namespace pandemic{

    Player pandemic::Scientist::discover_cure(City city){
        Board board;
        return Player(board,city);
    }
}