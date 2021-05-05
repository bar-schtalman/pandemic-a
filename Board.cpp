#include "Board.hpp"
using namespace std;

namespace pandemic{
    
    bool Board::is_clean(){
        return false;
    }

    int& Board::operator[](City city){
        return Board::d[city];

    }

    ostream& operator<<(ostream& output, const Board& board){
        return output;
    }

    void Board::remove_cures(){}
};