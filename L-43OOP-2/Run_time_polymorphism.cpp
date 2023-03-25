#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
  cout<< " speaking  " <<endl;
    }


};

class Dog: public Animal{
    public:
    void speak(){
cout<< " me tho barking krta hu " <<endl;
    }
};

int main(){

Dog obj;
obj.speak();

Animal obj1;
obj1.speak();

};