#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,3,9,10};
    int k = 2;
    int tmp[4]={0};
  
  for(int i=0;i<=3; i++){
  cout<< tmp[(i+k)%4]= arr[i];
  }
}