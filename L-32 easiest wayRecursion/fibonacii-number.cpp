#include <iostream>
using namespace std;

int fib(int n){
    // base case 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    // recursion calls ,,,,, Recursion relative
    int fibonacinumber = fib(n-1)+ fib(n-2);
     return fibonacinumber;
}


int main(){

    int n ;
    cout << " enter the number for fabonacci : ";
    cin>>n;

  int ans=  fib( n);

cout<<" number of faboncci nth number is: " <<n << " submission of n-1 + n-2  is  "<<ans << endl;
}