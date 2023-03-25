#include<iostream>
using namespace std;


int getsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

int n;
cout<<"enter array size :"; 
cin>>n;

// variable of size array
int *arr = new int[n];

// taking input n in array 
for(int i=0; i<n;i++){
    cin>> arr[i];
}

int ans= getsum(arr,n);

cout << " answer is "<<ans <<endl;

return 0;



}