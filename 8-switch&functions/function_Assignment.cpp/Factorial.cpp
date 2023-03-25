#include <iostream>
using namespace std;
void factorail()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int Ans = n * (n - 1);
    cout << " factorial of " << n << " is : " << Ans;
};

int main()
{
    factorail();
    return 0;
};