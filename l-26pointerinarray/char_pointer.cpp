#include<iostream>
using namespace std;

int main(){
    int arr[10] ={1,2,3,4,5};
    char ch[6]= "abcde";

    cout<< arr<<endl;

    // atttention here
    cout<<ch <<endl;// pura aaray print hoga 

    char *c = &ch[0];
    // print entire string
    cout<<c <<endl;

    
}