#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    // length of first  array
    int len1 = mid - s + 1;

    // length of second array
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value  in first array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // copy value of second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    // first array ko alag se check kr rhe h
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // seond array ko alag se check kr lia
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

// delete the dynamic memory 
    delete []first;
    delete []second;
}

void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    // left part sort karna h
    mergesort(arr, s, mid);

    // right part sort krna h
    mergesort(arr, mid + 1, e);

    // merge sorted array
    merge(arr, s, e);
}

int main()
{
    int arr[3] = {2, 5, 1};
    int n = 3;
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}