#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Mukesh");
    s.push("prajapati");
    s.push("kumar");

    cout<<"before pop, top element is :  " << s.top()<<endl;
       s.pop();
       cout<<"after pop, Top element :  "<<s.top();


cout<<" size of list : "<<s.size();
cout << " EMpty or not : " << s.empty()<<endl;

}