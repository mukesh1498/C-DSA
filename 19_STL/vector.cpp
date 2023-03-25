#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;
    cout<<" Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
     cout<<" Capacity -> "<<v.capacity()<<endl;


 v.push_back(2);
  cout<<" Capacity -> "<<v.capacity()<<endl;

v.push_back(5);
 cout<<" Capacity -> "<<v.capacity()<<endl;
 cout<<" size -> "<<v.size()<<endl;

v.push_back(6);
 cout<<" Capacity -> "<<v.capacity()<<endl;
 cout<<" size -> "<<v.size()<<endl;

 v.push_back(7);
 cout<<" Capacity -> "<<v.capacity()<<endl;
 cout<<" size -> "<<v.size()<<endl;

// ELEMENT AT INDEX 
cout<<" element of 4th  index : "<<v.at(4)<<endl;

// front and back elment of an vector
cout<< " front ->  " << v.front();
cout<< " back ->  " << v.back();

cout << "before  pop" <<endl;
for(int i:v){
    cout<<i ;
}cout<<endl;

v.pop_back();
v.push_back(43);
v.pop_back();
cout << "after  pop" <<endl;
for(int i:v){
    cout<<i ;
}cout<<endl;



v.clear();
cout<<" after clear size : "<<v.size()<<endl;

}
