#include<iostream>
using namespace std;

int main(){

    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    int s=0;
    int e= size-1;
    
    cout<< " printing the answer"<<endl;

while(true){
    if(s>e)
        break;
    

    cout<< arr[s]<<" ";
    cout<< arr[e]<< " ";
    s++;
    e--;
    
}
 return 0;
};