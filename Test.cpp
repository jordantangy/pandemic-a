#include "doctest.h"
#include "Board.hpp"

#include "OperationsExpert.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;


TEST_CASE("Board operator[] and isclean function"){
    Board board;
    CHECK(board.is_clean() == true);
    board[City::Atlanta] = 2;
    board[City::Bangkok] = 5;
    board[City::Cairo] = 7;
    board[City::Chicago] = 6;
    board[City::Johannesburg] = 1;
    board[City::Milan] = 8;
    board[City::Montreal] = 3;
    board[City::StPetersburg] = 4;
    board[City::Sydney] = 1;
    CHECK(board[City::Atlanta] == 2);
    CHECK(board[City::Bangkok] == 5);
    CHECK(board[City::Cairo] == 7);
    CHECK(board[City::Chicago] == 6);
    CHECK(board[City::Johannesburg] == 1);
    CHECK(board[City::Milan] == 8);
    CHECK(board[City::Montreal] == 3);
    CHECK(board[City::StPetersburg] == 4);
    CHECK(board[City::Sydney] == 1);
    CHECK(board.is_clean() == false);


}

TEST_CASE("functions"){
    Board board;
    Medic m(board,City::Bangkok);
    Researcher res(board,City::LosAngeles);
    Virologist viro(board,City::MexicoCity);
    Dispatcher dis(board,City::NewYork);
    Scientist sci(board,City::Bangkok,4);
    FieldDoctor doc(board,City::Jakarta);
    OperationsExpert op(board,City::Chicago);
    CHECK(m.role() == "Medic");
    CHECK(res.role() == "Researcher");
    CHECK(viro.role() == "Virologist");
    CHECK(dis.role() == "Dispatcher");
    CHECK(doc.role() == "FieldDoctor");
    CHECK(sci.role() == "Scientist");
    CHECK(op.role() == "OperationsExpert");
    CHECK_THROWS(m.build());
    CHECK_THROWS(res.build());
    CHECK_THROWS(viro.build());
    CHECK_THROWS(dis.build());
    CHECK_THROWS(doc.build());
    CHECK_THROWS(sci.build());
    CHECK(sci.role() != "Medic");
    CHECK(viro.role() != "Researcher");
    CHECK(dis.role() != "Virologist");
    CHECK(doc.role() != "Dispatcher");
    CHECK(sci.role() != "FieldDoctor");
    CHECK(op.role() != "Scientist");
    CHECK(doc.actual == op.fly_direct(City::Bangkok).actual);
    CHECK(doc.fly_direct(City::BuenosAires).actual != doc.fly_direct(City::Bangkok).actual);
    CHECK(sci.fly_direct(City::Istanbul).actual != res.fly_direct(City::Karachi).actual);
    CHECK(res.fly_direct(City::London).actual != viro.actual);


}