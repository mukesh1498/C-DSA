 #include <iostream>
 using namespace std;

 int main()
 {
//     // int a=8;
//     // cout<< &a;

//     // find access  the address and value
//     int a = 5;
//     // pointer create
//     int *ptr = &a;

//     // access the value ptr is pointing to
//     cout << " address of a" << &a << endl;
//     cout << " value of ptr " << ptr << endl;
//     cout << "address of ptr " << &ptr << endl;
//     cout << "value stored at pointer " << *ptr << endl;

//     // find size of pointer
//     //  poinetr data ka address ka size btata h to hamesha hi same aagyega

//     int i = 10;
//     int *p = &i;

//     cout << sizeof(i) << endl;

//     char ch = 'b';
//     char *c = &ch;

//     cout << sizeof(c) << endl;

//     double dtr = 3.05;
//     double *d = &dtr;

//     cout << sizeof(d) << endl;

//     // BAD PRACTICE
//     //    in that pointer address doesn`t exizts
//     // int *p;
//     // cout << *p << endl;

//     // Create NULL pointer
//     int *pointer = 0;
//     cout << *pointer << endl;

//     // ek pointer copy to other pointer
//     int n = 11;
//     int *ptr1 = &n;
//     int *dusraPtr = ptr1;

//     cout << *ptr1 << endl;
//     cout << *dusraPtr << endl;

    // FOR Practice
    int m = 10;
    int *p1 = &m;
    int *q1 = p1;
    int *r1 = q1;

    cout << m << endl;//10
    cout << &m << endl;//address of m
    cout << p1 << endl;//address of m
    cout << &p1 << endl;//address of m
    cout << *p1 << endl;//10
    cout << q1 << endl;// address of m
    cout << &q1 << endl;//address of q
    cout << *q1 << endl;//10
    cout << r1 << endl;//address of m
    cout << &r1 << endl;// address of r1
    cout << *r1 << endl;//10
    cout << (*p1) * 2 + (*r1) * 3 << endl;//50
    cout << (*p1 + *q1 + *r1) << endl;//30
    cout << (*p1 / 2) - (*q1) / 2 << endl; //5

    return 0;
};