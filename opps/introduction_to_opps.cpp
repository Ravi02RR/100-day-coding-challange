//  modular programming?

// object oriented programming

// exampleof Bank

// open account
// deposite
// withdraw

//  class are the  user defined data types

#include <iostream>
using namespace std;

class fruit
{
public:
    string name;
    string color;
};

class student
{
    string name;
    int rollNO;
};

int main()
{
    fruit apple; // object
    apple.name = "apple";
    apple.color = "red";
    cout << apple.name << "______" << apple.color << endl;

    fruit *mango = new fruit();
    mango->name = 'aam';
    mango->color = "peela";
    cout << mango->name << "---" << mango->color;

    return 0;
}

// constructor

// same name as calss name

// _SYS_TYPES_H

// default
// parametarise
// copyt
