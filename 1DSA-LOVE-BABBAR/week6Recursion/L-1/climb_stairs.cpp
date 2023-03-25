#include <iostream>
using namespace std;

int climbStairs(int src, int dest)
{
    // base case
    if (src == dest)
        cout << "me apne destination pr pauch gya " << endl;

    src++;
    return climbStairs(src, dest);
};

int main()
{
    int dest, src;
    cout << " chalna kahan se h :";
    cin >> src;
    cout << " mujhse apni destination pr jana h : ";
    cin >> dest;

    int ans = climbStairs(src, dest);
    cout << ans << endl;
    return 0;
};