#include "Board.hpp"
#include "Player.hpp"
#include "doctest.h"
#include "City.hpp"
#include "OperationsExpert.hpp"
#include "Scientist.hpp"
#include "Medic.hpp"
#include "GeneSplicer.hpp"

using namespace std;
using namespace pandemic;

TEST_CASE("Board"){

    Board board;

    CHECK(board.is_clean() == true);

    board[City::Paris] = 4;
    CHECK(!board.is_clean() == true);
    board[City::SanFrancisco] = 3; 
    board[City::Essen] = 1;
    board[City::Seoul] = 2;
    CHECK(!board.is_clean() == true);
    CHECK(board[City::Paris] == 4);
    CHECK(board[City::SanFrancisco] == 3);
    CHECK(board[City::Essen] == 1);
    CHECK(board[City::Seoul] == 2);

    CHECK(!board.is_clean() == true);
    
}

TEST_CASE("Drive"){

    Board board;

    OperationsExpert player1(board, City::NewYork);
    GeneSplicer player2(board, City::Baghdad);
    Medic player3(board, City::HongKong);
    Scientist player4(board, City::Sydney, 4);

    CHECK_NOTHROW(player1.drive(City::London));
    CHECK_NOTHROW(player2.drive(City::Istanbul));
    CHECK_NOTHROW(player3.drive(City::Shanghai));
    CHECK_NOTHROW(player4.drive(City::LosAngeles));
    
    CHECK_THROWS(player1.drive(City::Bogota));
    CHECK_THROWS(player2.drive(City::Delhi));  
    CHECK_THROWS(player3.drive(City::Riyadh));
    CHECK_THROWS(player4.drive(City::NewYork));
    CHECK_THROWS(player1.drive(City::Bogota));
    CHECK_THROWS(player2.drive(City::Delhi));  
    CHECK_THROWS(player3.drive(City::Riyadh));
    CHECK_THROWS(player4.drive(City::NewYork));
    CHECK_THROWS(player1.drive(City::Bogota));
    CHECK_THROWS(player2.drive(City::Delhi));  
    CHECK_THROWS(player3.drive(City::Riyadh));
    CHECK_THROWS(player4.drive(City::NewYork));

    
}



        
