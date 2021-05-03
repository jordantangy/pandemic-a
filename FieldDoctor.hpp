

#include "Board.hpp"

namespace pandemic{
    class FieldDoctor : public Player{

        public:
        FieldDoctor(Board& b, City city): Player(b, city){};


    };
}