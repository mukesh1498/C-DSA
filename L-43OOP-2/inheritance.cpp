#include <iostream>
using namespace std;

class Human
{

public:
    int age;
    string name;
    int weight;

    int getage()
    {
        this->age;
    }

    int setweight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << " mukesh is sleeping Now " << endl;
    }
};

int main()
{
    Male object1;
    cout << object1.weight << endl;
    cout << object1.age << endl;
    cout << object1.color << endl;
    object1.sleep();
    object1.setweight(21);
    cout << object1.weight << endl;
}