#include<iostream>
#include "Hero.cpp"
using namespace std;

int main(){
// static  
Hero a;

a.sethealth(110);
a.setlevel('A');
cout << " static allocation "<<endl;
cout << " level is " << a.level <<endl;
cout << " health is : " << a.gethealth()<<endl;




// Dynamically 
Hero *b = new Hero;
b->sethealth(210);
b->setlevel('B');
cout <<endl;

cout<< " in dyanamically 1st method for print the objects "<<endl;
cout << "level is : " << (*b).level<<endl;
cout<< "health is :" << (*b).gethealth()<<endl;


cout << endl;
cout << " 2nd Method is : "<<endl;
cout << " level is  :" << b->level<<endl;
cout<< " Health is : " << b->gethealth()<<endl;
}