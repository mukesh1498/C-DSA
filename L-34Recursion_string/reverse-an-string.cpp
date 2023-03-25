#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    cout << "call recieved for : " << str << endl;
    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // recursion call
    reverse(str, i, j);
}

int main()
{

    string name = " Mukesh";
    cout << endl;
    reverse(name, 0, name.length() - 1);
    cout << endl;
    cout << " reverse an strings is : " << name << endl;
}