#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = (start + end) / 2;

    while (start <  end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {10, 20, 30, 40, 50, 60};

    int index = binarysearch(even, 6, 50);
    cout << " index of number 50 is " << index << endl;
    return 0;
}