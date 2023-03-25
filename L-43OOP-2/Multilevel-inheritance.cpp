#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    string name;

public:
    void speak()
    {
        cout << " dog bhok rha h" << endl;
    }
};

class Dog : public Animal
{
};

class Germanshapad : public Dog
{
};

int main()
{

    Germanshapad kutta;
    kutta.speak();



    return 0;
}