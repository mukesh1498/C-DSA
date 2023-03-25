#include<iostream>
using namespace std;

void checknum(int n){
    if(n%2 == 0){
        cout << "Num is Even " <<endl;
    }else{
        cout<< " Num is Odd "<< endl;
    }
}


int main(){
int n;
cout << " Enter the number : ";
cin>>n;

checknum(n);

return 0;
};