#include<iostream>
#include<queue>

using namespace std;

int main(){
    // create a Queue
    queue<int> q;
    q.push(11);
    cout <<" in front of queue is: "<<q.front() <<endl;
    q.push(22);
     cout <<" in front of queue is: "<<q.front() <<endl;
    q.push(14);
    cout<< " Size of queue is :" << q.size() <<endl;

  q.pop(); 
   cout<< " Size of queue is :" << q.size() <<endl;

   if(q.empty()){
    cout<< " Queue is empty "<<endl;
   }else{
    cout<< "queue is Not Empty " <<endl; 
   }
    return 0;
}