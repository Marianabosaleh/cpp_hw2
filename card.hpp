#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel {}
using namespace ariel;



class Card{
    string color;
    string type;
    int number;

    public:
    Card(string color,string type,int number);

    string getcolor(){
        return color;
    }

    string gettype(){
        return type;
    }

    int getnumber(){
        return number;
    }
};

    