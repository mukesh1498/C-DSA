#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout<< " enter the value of array : "<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<< " printing the answer"<<endl;

    for(int i =0; i<5; i++){
        cout <<2*  arr[i] << " ";
    }
 return 0;
};