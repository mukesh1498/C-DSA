#include <iostream>
using namespace std;

void reachhome(int src, int destination)
{

    cout << src << " source is " << destination << endl;
    // base case
    if (src == destination) 
        {
    cout << " aakir me ghar  pauch gya " <<endl;
    return;
        }
    // processing -> 1 step aage badte jao
    src++;

    // recursion relation
    reachhome(src, destination);

    
}

int main()
{
    int src = 1;
    int destination = 15;

    cout << endl;

    reachhome(src, destination);

    return 0;
}