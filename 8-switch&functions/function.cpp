#include <iostream>
using namespace std;
// program for power of any number
/*int power(){
int num1,num2;
cout<<" enter the  number";
cin>>num1;
cout<<" enter the power";
cin>>num2;
int ans=1;

for(int i=1; i<=num2; i++){
    ans = ans*num1;
}
return ans;
}


int main(){

int answer=power();
cout << " answer is " << answer <<endl;
return 0;
}*/

// check number is prime or not
bool isEven(int a){

if(a&1){
    //odd
    return 0;
}
// even
return 1;

}
int main(){

    int num;
    cout<< " enter tehe number" ;
    cin>>num;

    isEven(num);

 if(isEven(num)){
    cout<< " Even number" <<endl;
     cout<< "Not a prime number " <<endl;

 }
 else{
cout<< " Number is odd " <<endl;
 cout<< "prime number" <<endl;
 }
} 







// program  for factorail number
/*int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{

    int numenator = factorial(n);

    int denomentor = factorial(r) * factorial(n - r);

    return numenator / denomentor;
}

int main()
{

    int n, r;
    cout << "enter the  factorial number for answer : " << endl;

    cin >> n >> r;

    ncr(n, r);

    cout << " answer of factorial number" << ncr(n, r) << endl;
}*/






// Function signature
/*void printcounting(int n){
    
     // function body
    for(int i = 1; i<=n; i++){
        cout<< i  <<" ";
    }
 cout<< endl;
 return ;
}


int main(){
    int n;
    cout << " kahan tak chalani h ";
    cin>>n;
    // Function call
    printcounting(n);
    return 0;
}*/

// count the number of given number n 
// int main(){
// int n;
// cout<<"please enter the total digit number";
// cin>>n;

// int digits =0;
// while(n>0){
//     digits++;
//     n = n/10;
// }
// cout<<digits<<endl;
// return 0;
// }





// int arthematic_number(int n){   
// }

// // Program for A.p (Arthematic number)
// int main(){
//     int n;
//     cout<< " Enter the number for (A.P) ";
//     cin>> n; 
 
// int arthematic_number(n);
// }