#include <iostream>
using namespace std;


// void solve(int arr[]){
//     cout<< "find size of arr inside the funstion " <<sizeof(arr)<<endl;
//     cout<< " in the function we pass the pointer so compiler print the size of pointer " <<endl;
// }


void update(int * p ){
     *p  = *p+10;
}
int main()
{
    // int arr[5] = {2, 3, 4, 5, 6};

    // cout << " print only base address of key" << endl;
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // cout << "value  of array  by pointer and index" << endl;
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout<< 0[arr] <<endl;// same as arr[0] and *(i+arr)
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << arr[1] << endl;
    // cout << *(arr + 2) << endl;
    // cout << arr[2] << endl;
    // cout << *(arr + 3) << endl;
    // cout << arr[3] << endl;

    // int *p = arr;
    // cout << p << endl;  // address of arr
    // cout << &p << endl; // address of p

    //   POINTER WITH CHAR

//     char ch[10] = "mukesh";
//     char *c = ch;

//     cout << ch << endl;
//     cout << c << endl;
//     cout << &ch << endl;
//     cout << &c << endl;
//     cout << ch[0] << endl;
//     cout << *c << endl;



// char cha ='k';
// char *cptr =&cha;
// cout<< cptr <<endl;



// int arr[10] = {1,2,3,4};

// cout<< sizeof(arr)<<endl;

// solve(arr);



 int a =5;
 int *p = &a;
cout<< " address of a"  << &a<<endl;

cout<< "address stord in ptr is : "<< p <<endl;
 update(p);
 cout<< " value of a is : "<< a <<endl;

    return 0;
};