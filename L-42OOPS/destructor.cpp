#include <iostream>
using namespace std;

class Hero
{

    // properties
public:
    char name[100];
    int health;
    static int timetocomplete;

public:
    char level;
    Hero()
    {
        cout << " consrtuctor bhai called " << endl;
    }

    // destructor
    ~Hero()
    {
        cout << " Destructor bhai called" << endl;
    }

    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }

    int sethealth(int h)
    {
        health = h;
    }

    int setlevel(char ch)
    {
        level = ch;
    }
};

int Hero::timetocomplete = 5;

int main()
{
    // print without objects
    cout << Hero::timetocomplete << endl;

    // print with object
    Hero rahul;
    cout << rahul.timetocomplete << endl;

    Hero pritam;
    pritam.timetocomplete = 10;
    cout << pritam.timetocomplete << endl;

    // static
    Hero a;

    // Dynamically
    Hero *b = new Hero();
    // destructor  manually  krna krna pdta h
    delete b;
}