#include "Dispatcher.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

namespace pandemic{
        
        Player pandemic::Dispatcher::fly_direct(City city){
            Board board;
            return Player(board,city);
    }
}
