#include "Medic.hpp"

namespace pandemic{

    Player pandemic::Medic::treat(City city){
        Board board;
        return Player(board, city);
    }
}