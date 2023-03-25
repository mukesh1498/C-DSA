#include <iostream>
using namespace std;

void print (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << "  ";
    }
    cout<<endl;
}

bool Binarysearch(int *arr, int s, int e, int k)
{

    cout << endl;

    print(arr,e);
    // base case

    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return Binarysearch(arr, mid + 1, e, k);
    }
    else
    {
        return Binarysearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {10, 12, 14, 17, 18, 20};
    int size = 6;
    int key = 2;

    int ans = Binarysearch(arr, 0, size, key);
    if (ans)
    {
        cout << " key is present " << endl;
    }
    else
    {
        cout << " key is not present -> Absent  " << endl;
    }
}
