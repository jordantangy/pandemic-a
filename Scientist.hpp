
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic{
    class Scientist : public Player{
        public:
        int n;
        public:
        Scientist(Board& b, City city,int n): Player(b, city),n(n){};


    };
}