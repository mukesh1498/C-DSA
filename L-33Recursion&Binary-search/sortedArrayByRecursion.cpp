#include<iostream>
using namespace std;

bool isSorted(int *arr ,int size){
    //base case for sorted array
    if(size==0 || size ==1){
        return 1;
    }
    
    if(arr[0]>arr[1]){
        return 0;
    }else{
        bool remainingPart= isSorted( arr+1 , size-1);
        return remainingPart;
    }
    
}

int main(){

int arr[5] = {7 ,4,5,7,9};
int size=5;

int ans = isSorted(arr,size);

if(ans){
    cout <<  " array is sorted"<<endl;

}
else{
    cout << " array is Not sorted" <<endl;
}


}