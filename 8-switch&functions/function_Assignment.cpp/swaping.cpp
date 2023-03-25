#include<iostream>
using namespace std;


int main(){
int a=10;
int b=20;

// Without third variable 
// a=a-b;
// b=a+b;
// a=a-b;
// cout<< "10 a is : "<<a<<endl;
// cout<< " 20 b is: "<<b<<endl;


int temp;
temp =a;
a=b;
b=temp;
cout<< " With temp variable"<<endl;
 cout<< "10 a is : "<<a<<endl;
 cout<< " 20 b is: "<<b<<endl;
};