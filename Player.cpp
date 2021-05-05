#include "Player.hpp"
#include "City.hpp"

using namespace std;

namespace pandemic{

        Player& pandemic::Player::drive(City city)
        {
            return *this;
        }

        Player& pandemic::Player::fly_direct(City city)
        {
            return *this;
        }

        Player& pandemic::Player::fly_charter(City city)
        {
            return *this;
        }

        Player& pandemic::Player::fly_shuttle(City city)
        {
            return *this;
        }

        Player& pandemic::Player::build()
        {
            return *this;
        }

        Player& pandemic::Player::discover_cure(Color color)
        {
              return *this;
        }

        Player& pandemic::Player::treat(City city)
        {
            return *this;
        }
        string pandemic::Player::role(){
            return "";
        }
    
        Player& pandemic::Player::take_card(City city){
            return *this;
    }
        
}