#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    string name;

public:
    void bark()
    {
        cout << " dog bhok rha h" << endl;
    }
};

class Human
{
public:
    int age;
    string name;

public:
    void speak()
    {
        cout << " banda bhol rha h" << endl;
    }
};


// Multiple Inhreitance
class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid obj;
    obj.speak();
    obj.bark();

    return 0;
}