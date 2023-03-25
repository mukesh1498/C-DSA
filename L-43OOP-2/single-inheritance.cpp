#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;

    void speak(){
        cout << "jacky  bhaoooo bhaooo bhaooo  bhaooo krta hai "<<endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog jacky;
    jacky.speak();

    cout << jacky.age <<endl;
}