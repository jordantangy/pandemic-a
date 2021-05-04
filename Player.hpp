
#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <typeinfo>

using namespace std;

namespace pandemic{
    class Player{
        public:
        Board board;
        City actual;
        string Role;
        
        Player(Board b, City c):board(b), actual(c){}; 
        Player& drive(City city);
        Player& fly_direct(City city);
        Player& fly_charter(City city);
        Player& fly_shuttle (City city);
        virtual void build();
        void discover_cure (Color color); 
        Player& treat (City city);
        Player& take_card(City city);
        string role(){
            return Role;
        };

            
    };
}