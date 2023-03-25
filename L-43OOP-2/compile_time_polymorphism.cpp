#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << " HEloo mukesh " << endl;
    }
    void sayHello(string name)
    {
        cout << " HEloo mukesh " << endl;
    }
    int sayHello( int n)
    {
        cout << " mukesh  bhaiya " << endl;
        return 1;
    }
};

int main()
{
    A object;
    object.sayHello();
    return 0;
};