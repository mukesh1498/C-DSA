#include <iostream>

using namespace std;

int main()
{
    int i = 10;

    // create a refrence variable
    int &j = i;

    cout << i << " "<< j<< endl;
    
    i++;
  cout << i << " "<< j<< endl;
  
    j++;
    cout << i << " "<<   j<< endl;
    return 0;
}