#include <iostream>
using namespace std;

int main()
{
    int num = 100;


    cout<<"direct num value is : " << num << endl;

    // address of operator -> &

    cout << " by &num address of num is " << &num << endl;
    int *p = &num;
    cout << "address by pointer is : " << p << endl;
    cout << "by *pointer value is : " << *p << endl;
   
   
   double d = 4.2;
   double *p2= &d;
   cout<< " address is : "<<p2 <<endl;
   cout<< " value is : " <<*p2  << endl;

   cout<< " size of intege : " << sizeof(num)<<endl;
   cout<< " size of pointer1  : " << sizeof(p)<<endl;
 cout<< " size of pointer  : " << sizeof(*p2)<<endl;

    return 0;
}