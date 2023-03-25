#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

   
    
    d.push_back(22);
     d.push_front(111);
    for(int i : d){
        cout<<i <<" ";
    }

}
