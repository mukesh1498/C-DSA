#include <iostream>
using namespace std;


// // ye concept humara (PASS BY VALUE) h 
// // because update function i ki new copy create ho jati hai so, agr hum isme koi n++ krenge to sirf update mai hi change hoga  
// int update(int n)
// {
//     n = n + 1;
//     return n;
// }

// int main()
// {
//     int i = 11;

//     cout << " before" << i << endl;
//     update(i);
//     cout << "after" << i << endl;

// (PASS BY REFERENCE)
 // by this method, update me sirf koi dursa name dete h , koi change krenge to vo direct main function me hota h

 int update2(int& n){
    n++;
    return n;
}
int main(){
    int i=16;
    cout << " before" << i << endl;
     update2(i);
    cout << "after" << i << endl;
}




