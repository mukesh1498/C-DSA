#include<iostream>
using namespace std;
int main(){

int arr[][];
int row=4;
int col =3;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cin>>  arr[i][j] ;
    }
}
cout<<endl;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout  <<arr[i][j] << " " ;
    }
}
cout<<endl;


}