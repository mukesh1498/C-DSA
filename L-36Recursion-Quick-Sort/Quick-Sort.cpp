#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete h
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex; 
}

void QuickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition kar denge
    int p = partition(arr, s, e);

    // first wala part sort krenge
    QuickSort(arr, s, p - 1);

    // second wala part sort krenge
    QuickSort(arr, p + 1, e);
}

int main()
{

    int arr[6] = {4, 2, 5, 6, 3, 8};
    int n = 6;

    QuickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}