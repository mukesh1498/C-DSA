#include<iostream>
using namespace std;
  // Print counting reverse and forward  

void printcounting(int n){
    // base case 
    if(n==0)
    return ;

   //processing
    cout<< n<<" " <<endl;

// recursioncall
printcounting(n-1);

}


int main(){

int n; 
cout<< " enter the value of n: ";
cin>>n;

printcounting(n);
return 0;
};