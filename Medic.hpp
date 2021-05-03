

#include "Board.hpp"

namespace pandemic{
    class Medic : public Player{

        public:
        Medic(Board& b, City city): Player(b, city){};


    };
}