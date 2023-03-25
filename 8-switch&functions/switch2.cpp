#include<iostream>
using namespace std;

char getgrade(int num){


 switch ( num/10)
{
case 10: return 'A';break;
case 9: return 'B';break;
case 8: return 'C';break;
case 7: return 'D';break;
case 6: return 'E';break;

default: return 'f';
    break;
}
};
int main(){
    
    int marks ;
    cout<<" enter the markes : ";
    cin>>marks;
for(int i =0 ; i<=100; i++){
    char ans = getgrade(i);
    cout << i <<" meri jaan priya kitni basti : "<<ans<<endl;
}}
