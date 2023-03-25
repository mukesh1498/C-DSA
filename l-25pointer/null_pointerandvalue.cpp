#include<iostream>
using namespace std;
int main(){
  int i = 5;
    int *ptr = &i;

    cout << " address is: " << ptr << endl;
    cout << " value is: " << *ptr << endl;

    int *ptr2 = 0;
    ptr2 = &i;

    cout << " address is: " << ptr2 << endl;
    cout << " value is: " << *ptr << endl;

    return 0;
}