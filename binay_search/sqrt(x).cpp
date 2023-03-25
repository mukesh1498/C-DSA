#include <iostream>
using namespace std;

long long int binarySearch(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
};

int mySqrt()
{
    int n;
    cout << "enter the number fr square roots";
    cin >> n;

    cout<< binarySearch(n);
};
