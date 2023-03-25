#include <iostream>

using namespace std;

int getsum(int *arr, int size)
{

    // base case
    if (size == 0)
    {
        return 1;
    }
    if (size == 1)
    {
        return arr[0];
    }
    

    int ans = getsum(arr + 1, size - 1);
    int sum = arr[0]+ans;
    return sum;
}

int main()
{

    int arr[5] = {6, 2, 3, 4, 5};
    int size = 5;

    int ans = getsum(arr, size);
    if (ans)
    {
        cout << " answer is " << ans << endl;
    }
}