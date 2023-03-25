#include <iostream>
using namespace std;

int checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
};
int main()
{
    int n;
    cout<< " enter number";
    cin >> n;

cout<< " total prime Number 1 to "<<n << " is :";
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = checkPrime(i);
        if (isPrime)
        {
            cout << i << " ";
        }
    }
    return 0;
};