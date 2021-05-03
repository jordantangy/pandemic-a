

#include "Board.hpp"
#include "Player.hpp"

namespace pandemic{
    class Researcher : public Player{

        public:
        Researcher(Board& b, City city): Player(b, city){};


    };
}