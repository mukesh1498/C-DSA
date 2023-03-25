#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy first array extra number in arr3
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    // copy second array extra number in arr3
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void Print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {11, 33, 55, 77, 99, 100};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[10] = {0};

    merge(arr1, 6, arr2, 4, arr3);

    Print(arr3, 10);
    return 0;
}