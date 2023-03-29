#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include "player.hpp"
using namespace std;

Player::Player(){
    name="def";
}

Player::Player(string name){
    this->name=name;
}
void Player::setname(string new_name){
    name= new_name;
}
int Player::stacksize(){
    return 26;
}
int Player::cardesTaken(){
    return 0;
}
