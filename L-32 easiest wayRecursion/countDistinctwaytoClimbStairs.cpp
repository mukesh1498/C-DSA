#include <iostream>
using namespace std;

int countDistinctWayToClimbStairs(long long n)
{
    // base case
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    // Recursion call
    int answer = countDistinctWayToClimbStairs(n - 1) + countDistinctWayToClimbStairs(n - 2);

    return answer;
}
int main()
{
    int n;
    cout << " enter the top step  : ";
    cin >> n;

    int ans = countDistinctWayToClimbStairs(n);

    return ans;
}
