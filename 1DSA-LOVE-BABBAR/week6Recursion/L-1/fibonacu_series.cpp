#include <iostream>
using namespace std;
   // finbonacci series

int fibonacci(int n)
{ // base case
    if (n == 1)
    {//first term
        return 0;
    }
    if(n==2){
        //second term
        return 1;
    }
    // RR -> f(n)= f(n-1) + f(n-2)
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    int n;
    cout << " enter the term you want to see :";
    cin >> n;

    int ans = fibonacci(n);

    cout << n << " th term is: " << ans << endl;

    return 0;
};