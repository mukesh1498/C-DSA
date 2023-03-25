#include <iostream>
using namespace std;
int main()
{
    int n = 523;

    // // BY WHILE LOOP
    //     while (n != 0)
    //     {
    //         int res = n % 10;
    //         cout << res << " ";
    //         n = n / 10;

    //     }

// by loop
    for (; n != 0; n = n / 10)
    {
        int rem = n % 10;
        cout << rem << " ";
    }
}