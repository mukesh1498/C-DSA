#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){


// creation
map<string,int> m;


//insertion
// method1
pair<string,int> p =make_pair("mukesh",3);
m.insert(p);
//2 
pair<string,int> pair2("love",3);
m.insert(pair2);


//3
// creation 
m["mera"]= 1;

// updation hoti h ,What will happen
m["mera"]=2;


//SEARCH
cout<< m["mera"] <<endl;
cout<< m.at("mukesh")<<endl;

cout<<m["unknownKey"]<<endl;
cout<< m.at("unknownKey") <<endl;



//size
cout<<m.size()<<endl;
 
 // to check Presence 
 cout<< m.count("love")<<endl;

 //to erase
 m.erase("love");
 cout<<m.size()<<endl;

 // to access in map 
 // using for-each loop
 for(auto i:m){
   // cout<< i.first << " " << i.second <<endl;
 }
 
 // By using iteratior
  map<string,int> :: iterator it =m.begin();

  while(it != m.end()){
    cout<< it->first << " "<< it->second <<endl;
    it++;
  }
 return 0;
};