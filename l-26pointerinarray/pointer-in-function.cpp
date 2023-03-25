#include<iostream>
using namespace std;
// pointer - > pass by value 
void print(int *p){
    cout<<" address of value :" << p <<endl;
    cout<< *p <<endl;

}
void update(int *p){
     *p=*p+1;
 //p =p+1;
 //cout << " only inside increment of p address " << p << endl;

}
int main(){
    int value =5;
    int *p =&value;

    print(p);
    cout << " befor" << p<<endl;
     cout << " befor" << *p<<endl;
    update(p);
    cout<< " after " << p <<endl;
     cout << " after " << *p<<endl;
    return 0;
}