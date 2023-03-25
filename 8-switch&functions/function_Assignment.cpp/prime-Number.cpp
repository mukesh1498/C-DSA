#include<iostream>
using namespace std;

int primeNumber(int n){

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
    
};

int main(){
    int n;
    cout<< " enter to check the Numer is prime or not :";
    cin>>n;
int isPrime= primeNumber(n);
 if(isPrime){
    cout<< " prime Number Is :"<<n<<endl;
 }else{
    cout<< " Not prime : "<<n << endl;
 }


return 0;
};