#include "FieldDoctor.hpp"

namespace pandemic{

    Player pandemic::FieldDoctor::discover_cure(City city){
        Board board;
        return Player(board, city);
    }
}