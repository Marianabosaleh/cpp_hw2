#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "card.hpp"
namespace ariel {}
using namespace ariel;


Card::Card(string color,string type,int number){
    this->color=color;
    this->type=type;
    this->number=number;
}
