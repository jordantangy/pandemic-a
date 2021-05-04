

#include "Board.hpp"
#include "Player.hpp"
namespace pandemic{
    class GeneSplicer : public Player{

        public:
        GeneSplicer(Board& b, City city): Player(b, city){};


    };
}