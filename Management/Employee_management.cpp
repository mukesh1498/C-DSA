#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    char username, password;

    cout<< "\n\n\t\t Employee Managment System" <<endl;
    cout<< " \n\n\t\t SIgn Up" <<endl;
   string username, password;
   cout<< "\n\t Enter the Name : ";
   cin>>username;
   cout<<" Enter the Password :";
   cin>>password;
   cout<<"\n\n\tYour Id is creating Please wait ";
   for(int i=0; i<6;i++){
    cout<<" .";
    _sleep(1000);
   }
   if((username.empty())){
      cout<< " Please Enter the Username and Password";
   }
    cout<<"\n\n\tYour Id is created Succesfully";

}