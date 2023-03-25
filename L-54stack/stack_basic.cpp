#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation stack
    stack<int> s;

    //Push operation
    s.push(2);
    s.push(3);

    //pop
   // s.pop();

    cout << " printing top element  is " <<s.top() <<endl;

    if(s.empty()){
        cout << " stack is empty"<<endl;
    }else{
        cout<< " stack is not empty";
    }
    return 0;
}