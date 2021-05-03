

#include "Board.hpp"

namespace pandemic{
    class Virologist : public Player{

        public:
        Virologist(Board& b, City city): Player(b, city){};


    };
}