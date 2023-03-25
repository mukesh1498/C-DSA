#include<iostream>
using namespace std;

int factorial(int n){

    // Base case  
    if(n==0)
    return 1;

    int chotiproblem = factorial(n-1);
    int badiproblem= n*chotiproblem;
}
int main(){

int n;
cout << " enter the value for factorial : ";
cin>>n;

int ans = factorial(n);
cout<< ans<<endl;

}