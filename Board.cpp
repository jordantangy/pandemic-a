#include "Board.hpp"
using namespace std;
using namespace pandemic;

int& Board::operator[](City city){
    
    return cities_net[city];
}
ostream& pandemic::operator<<(ostream& os,const Board& b){
    return os;
}
bool Board::is_clean(){
    return true;
}
void Board::remove_cures(){

}



