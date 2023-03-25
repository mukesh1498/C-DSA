#include<iostream>
using namespace std;

int main(){

    int arr[10] ={2,5,6};
    cout<< " address of first element of any array: "<<arr<<endl;
 cout<< " address of first element of any array: "<<&arr[0]<<endl;
cout<< arr[0] <<endl;

cout<< " 4th " <<*arr <<endl; 
cout<< " 5th " << *arr+1 <<endl; 
cout<< " 6th " << *(arr+1)<<endl;
cout<< " 7th is same as 5th : first print value 2 and + 1 = >3 :  " << (*arr)+1<<endl;


// size of array and pointer in bytes
int temp[10]={1,2};
cout<< sizeof(temp)<<endl;
cout<<"1st: "<< sizeof(*temp)<<endl;
cout<<"2nd: "<< sizeof(&temp)<<endl;
int *ptr =&temp[0];
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;

int array[10];


int *pointer = &array[0];
cout<<" after increment of address :"<< pointer <<endl;
pointer = pointer+1;
cout<< "after increment by 4 bytes : " <<pointer <<endl;

    return 0;
}