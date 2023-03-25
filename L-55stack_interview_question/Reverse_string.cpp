#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "mukesh";

   stack <char> s;
   // stack me string insertion kr do
   for(int i=0; i<str.length();i++){
    char ch = str[i];
    s.push(ch);
   }

   string ans=" ";
   //jab tak stack nhi ho jaye tab tak loop chalao
   while(!s.empty()){
    char ch = s.top();
    ans.push_back(ch);
    
    s.pop();
   }
   cout<< " answer is : " <<ans<<endl;

   return 0;

}