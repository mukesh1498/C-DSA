#include<iostream>
#include<string.h>
using namespace std;

char getlength(char ch[]){

    int length = 0;
    int i=0;
    while(ch[i] != "/0"){
        length++;
    }
    return length;
}
int main(){
    // char name[100];
    // cout<< " please enter the full name : "; 
    // cin>>name;


    
    //     cout<< " aapka naam " << name << " hai" << endl;
    

    // 1-1 char se bhi name bna skte hain
   


//    char ch[100];
//    cin.getline(ch,50);
//    cout<< ch <<endl;



//legth of character
char name[110];
cin>>name;

cout<< " length of " <<getlength(name) <<endl;
cout<< " length is " strlen(name);
}