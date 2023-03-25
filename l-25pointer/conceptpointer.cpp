#include<iostream>
using namespace std;

int main(){
    int num =10;
    int a = num;
    cout<< " a before : "<< num<<endl;
    a++;
    cout<< " a after : "<< num << endl;


// initialize with pointer
    int *p = &num;
    cout<<" before "<<num<<endl;
   // (*p)++;
    cout<< " after : "<<num <<endl;


    // copying a pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<< *p <<"-"<<*q<<endl;

    //important concept
    int i =3;
    int *t =&i;
   cout<< "value is: " << *t<<endl;
    
    *t=*t+1;
      cout<<" after increment pointer  value is : " <<*t<<endl;
      cout<<" before t increment of address 100-104 " <<t <<endl;
      t=t+1;
      cout<< " after t "<<t <<endl;




    return 0;
}