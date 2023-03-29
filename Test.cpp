#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"



TEST_CASE("testing the constructor of player"){
    CHECK_NOTHROW(Player p1("Alice"));
}

TEST_CASE("testing the methods of player and thats the game beginning is correct"){
    Player p1("Alice");
    Player p2("Bob");
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(p1.cardesTaken());
    CHECK(p1.stacksize()==26);
    CHECK(p1.cardesTaken()==0);
    CHECK(p2.stacksize()==26);
    CHECK(p2.cardesTaken()==0);

}

TEST_CASE("testing the constructor of game"){
    Player p1("Alice");
    Player p2("Bob");
    CHECK_NOTHROW(Game game(p1,p2));
}

TEST_CASE("testing the playTurn method of game"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    for(int i=0;i<5;i++){
        game.playTurn();
    }
    CHECK(p1.cardesTaken()==0);
    CHECK(p1.stacksize()==21);
    CHECK(p2.cardesTaken()==0);
    CHECK(p2.stacksize()==21);
}


TEST_CASE("testing the playTurn method with draw of game"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    game.playTurn();
        
    CHECK(p1.stacksize()==23);
    CHECK(p1.cardesTaken()==3);// Alice won this draw
    CHECK(p2.stacksize()==23);
    CHECK(p2.cardesTaken()==0);
}

TEST_CASE("testing the play all method of game"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    game.playAll();
        
    CHECK(p1.stacksize()==0);
    CHECK(p1.cardesTaken()==26);
    CHECK(p2.stacksize()==0);
    CHECK(p2.cardesTaken()==26); 
}
    TEST_CASE("testing if we have a winner in the end of the game"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    game.playAll();
        
    CHECK(p1.stacksize()==0);
    CHECK(p2.stacksize()==0);
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printWiner());
}


