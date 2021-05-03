#pragma once
#include "City.hpp"
#include <iostream>
#include <map>
#include <array>
#include <list>


namespace pandemic{

    class Board{
        map<City,list<City>>  cities_net;



    public :
    Board();
    int& operator[](City city);
    friend ostream& operator<<(ostream& os,Board& b);
    bool is_clean();

    };
}