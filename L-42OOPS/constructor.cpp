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

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    void print()
    {
        cout << level << endl;
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
    // object created statically
    // cout << " Hi" <<endl;
    Hero ramesh;
    // cout << " default constructor hota h ye " <<endl;
    ramesh.print();
    
    
    
    // object created Dynamically
    Hero *h = new Hero;
    h->print();



    // many parameter as input
    Hero temp(22, 'A');
    temp.print();
    
    
    // parameter constructor
    Hero ramesh(20);
      cout << " Address of ramesh is : " << &ramesh << endl;
}