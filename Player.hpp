
#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

using namespace std;

namespace pandemic{
    class Player{
        public:
        Board board;
        City actual;
        string Role;
        
        Player(Board b, City c):board(b), actual(c){}; 
        Player& drive(City city);
        Player& fly_direct(City);
        Player& fly_charter(City city);
        Player& fly_shuttle (City city);
        void build();
        void discover_cure (Color color); 
        Player& treat (City city);
        Player& take_card(City city);
        void discover_cure(Color color);
        string role(){
            return Role;
            };
    };
}