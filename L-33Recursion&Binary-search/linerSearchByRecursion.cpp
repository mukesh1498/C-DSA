#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<< "print array for size  "<< size <<endl;

    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int LinearSearch(int arr[],int size , int k){

    print(arr,size);
    //base case 
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    } 
    else{
        int remainingpart = LinearSearch ( arr+1 , size-1, k);
        return remainingpart;
    }
 


}

int main(){
    int arr[5]={3,5,1,2,6};
    int size =5;
    int key = 2;

    int ans = LinearSearch(arr,size,key);

    if(ans){
        cout << "key is found"<<endl; 
    }else{
      cout <<" key is not found"<<endl;
    };

}