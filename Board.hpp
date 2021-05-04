#pragma once
#include "City.hpp"
#include <iostream>
#include <map>
#include <array>
#include <list>
using namespace std;

namespace pandemic{

    class Board{
        map<City,int>  cities_net;



    public :
    int& operator[](City city);
    friend ostream& operator<<(ostream& os,const Board& b);
    bool is_clean();
    void remove_cures();

    };
}