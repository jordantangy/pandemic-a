

#include "Board.hpp"

namespace pandemic{
    class Dispatcher : public Player{

        public:
        Dispatcher(Board& b, City city): Player(b, city){};


    };
}