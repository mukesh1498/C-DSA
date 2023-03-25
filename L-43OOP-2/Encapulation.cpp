#include <iostream>
using namespace std;

class Employee
{
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    Employee mukesh;
    cout << " sab sahi chal rha hai" << endl;

    return 0;
}