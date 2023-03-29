#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "player.hpp"
using namespace std;
namespace ariel {}
using namespace ariel;



class Game{
    Player p1;
    Player p2;

    public:
    Game();
    Game(Player p1,Player p2);
    void playTurn();
    void printLastTurn(); 
    void playAll(); 
    void printWiner(); 
    void printLog(); 
    void printStats();

};
