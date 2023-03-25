#include<iostream>
using namespace std;

int main(){

    int arr[10]={2,3,4,5,8,9,-6,88,33,13};
    int size = 10;
    int maxi = INT64_MIN;


    for(int i =0; i<size; i++){
        if( arr[i] < maxi){
            maxi = arr[i];
        }
    }

    cout<< " maximum number is :" << maxi<<endl;
 return 0;
};