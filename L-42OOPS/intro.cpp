#include<iostream>
#include "Hero.cpp"

using namespace std;




int main(){
//create by static allocation 


// creation of objects
Hero umesh;
 cout << " umesh health is  : " << umesh.gethealth()<<endl;

// use the setter 
umesh.sethealth(80);

// direct intialize value 
//umesh.health=80;

umesh.level = 'A';

// by gethealth we can print the private value
cout << " health is : " << umesh.gethealth()<<endl;


// direct print the value 
//cout << "health is : "<< umesh.health << endl;
cout << " level is : "  << umesh.level <<endl;
// cout << " size : " << sizeof(umesh)<<endl;
}