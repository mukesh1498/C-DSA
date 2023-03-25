#include <iostream>
#include<array>
using namespace std;


// ARRAY PRE-BULID DATA-STRUCTURE 


int main(){
    int basicarr[5] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        cout << basicarr[i] <<" "<<endl;
    }
    
    // TO CHECK THE SIZE OF ARRAY
    array<int , 7> a={11,22,33,44,55,66,77};
    int size= a.size();
    for(int i=0; i <size-1; i++){
    cout <<" stl array "<< a[i] <<" " <<endl; 
    }

      //TO CHECK THE ANY INDEX ELEMENT
    cout<< " Element at 4th index : " << a.at(6)<<endl;


    cout<< " empty or not in boolean : " <<a.empty()<<endl;

    cout << " first number of array is : " <<a.front()<<endl;
     cout << " last number of array is : " <<a.back()<<endl;

}