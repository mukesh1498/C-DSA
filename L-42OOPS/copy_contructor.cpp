#include <iostream>
using namespace std;

class Hero
{

    // properties
private:
    char name[100];
    int health;

public:
    char level;

    // Default Constructor
    Hero()
    {
        cout << " Constructor called" << endl;
    }

    // Parameter Constructor
    Hero(int health)
    {
        cout << " this -> " << this << endl;
        this->health = health;
    }

    //Copy constructor
    Hero (Hero& temp){
        cout << " copy contructor chal rha hai" <<endl;
     this->health = temp.health;
     this->level = temp.level;
    };

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    void print()
    {
        cout << " health " << this->health << endl;
        cout << " level " << this->level << endl;
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

int main()
{

    Hero suresh(22, 'd');
    suresh.print();

    // copy contrutor
    Hero ritesh(suresh);
    // ritesh.health = suresh.health;
    // ritesh.level = suresh.level;

    ritesh.print();
}