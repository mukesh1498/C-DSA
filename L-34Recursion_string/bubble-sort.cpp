#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    // base case - already sorted array 
    if (n == 0 || n == 1)
    {
        return ;
    }

    // 1 case solve krlia - largest element ko end me shift rkh denge
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }


// recursion call 
        sortArray(arr, n - 1);
    }

    
}

int main()
{
    int arr[8] = {33, 44, 75, 45, 72, 34, 26, 49};

    sortArray(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}