#include<iostream>
using namespace std;

int main(){
//1
    // int first =8;
    // int second =18;
    // int *p=&second;
    // *p = 9;
    // cout<< first<< " "<< second<<endl;

// 2
// int first =6;
// int *p = &first;
// int *q =p;
// (*q)++;
// cout<< first<<endl;


//3
// int first = 8;
// int *p=&first;
// cout<<(*p)++<<" ";
// cout<< first<<endl;

// 4
// int first =8;
// int second =11;
// int *third =&second;
// first = *third;
// *third = *third+2;
// cout<<first << " " <<second;

//6
// float f=12.5;
// float p =21.5;
// float* ptr =&f;
// (*ptr)++;
// *ptr = p;
// cout<<*ptr << " "<< f << " "<< p <<endl;

//7
// int arr[] ={11,12,13,14};
// cout<<*arr<<" "<<*(arr)+1;

//8
// int arr[3]={11,22,33};
// cout<< arr << " " <<&arr<<endl;

//9
// int arr[6]={11,12,13};
// cout<< (arr+1)<< " ";

//10
// int arr[6]={11,21,31};
// int *p= arr;
// cout<< p[2];

//11
// int  arr[6] = {11,12,13,14,15,16};
// cout<< *(arr) <<" " <<*(arr+3);

//12 error symbal table
// int arr[5]={11,21,31,41};
// int *p= arr++;
// cout<< *p ;



// 13
// char ch = 'a';
// char* ptr= &ch;
// ch++;
// cout<< *ptr;
 
// 14
// char arr[] ="abcde";
// char *p=&arr[0];
// cout<< p <<endl;

//15
char  arr[]= " abcde";
char *p = &arr[0];
p++;
cout<< p<<endl;






}