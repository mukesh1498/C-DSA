#include <iostream>
using namespace std;

// find factorial 
int factorial(int n)
{
    cout << " function is called for n:  " << n << endl;
    // base case
    if (n == 1)
        return 1;

    int ans = n * factorial(n - 1);
    return ans;
}

// RECURSION  --> when a function call itself
// in Desi ---> bigger problem ka solution depend krta ho chotti or same type ki problem pr
int main()
{
    int n;
    cout << " enter the value of n" << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Answer is : " << ans << endl;
    return 0;
};