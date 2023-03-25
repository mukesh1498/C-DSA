#include <iostream>
using namespace std;

int score =21; // it is our global variable and use of this variable in all function and everywhere in our program

void function1(int& i)
{
    cout << score << " in function1" << endl;
    cout << i << endl;
}

void function2(int& j)
{ 
    cout << score<<" in function 2"<<endl;
    cout << j << endl;
}

int main()
{

    int i = 5; // local variable 

 cout << score << "  in main function " <<endl;
    function1(i);
    function2(i);
}