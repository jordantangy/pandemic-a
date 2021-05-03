#pragma once
#include <iostream>
#include "Player.hpp"


namespace pandemic{
    class OperationsExpert : public Player{

        public:
        OperationsExpert(Board& b, City city): Player(b, city){};


    };
}

