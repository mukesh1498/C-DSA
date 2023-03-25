#include <iostream>
using namespace std;

int main(){
    int i =5;
    int* p =&i;
    int** p2 = &p;
    
    cout<<" access value by 3 method ::"<<endl;
    cout<< i<<endl;
    cout<<*p<<endl;
    cout<< **p2<<endl; 


cout<< " aceess address of 5 by 3 methods :"<<endl;
    cout<< &i<<endl;
    cout<< p<<endl;
    cout<< *p2<<endl;
}