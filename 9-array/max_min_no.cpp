#include <iostream>
using namespace std;

//   PROGRAM FOR A CHECK MAX & MIN ELEMENT IN ARRAY

// int getMin(int arr1[], int n)
//  {
//      int min = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr1[i] < min)
//         {
//             min = arr1[i];
//         }
//     }

//     return min;
// }

// int getMax(int arr2[], int n)
// {
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         maxi= max(maxi, arr2[i]);
//         // if (arr2[i] > n)
//         // {
//         //     max = arr2[i];
//         // }
//     }

//     return maxi;
// }

// int main()
// {

//     int size;
//     cout << "please enter the size and element of an array is : ";
//     cin >> size;

//     int num[100];

//     // taking input in array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//         cout << num[i];
//     }
//     cout << " Minimum number is : " << getMin(num, size) << endl;
//     cout << " MAximum number is : " << getMax(num, size) << endl;
// }

//   PROGRAM FOR A UPDATE/ADD ELEMENT AND SCOPE OF AN  ARRAY
/*void update(int arr[], int n)
{

    cout << " i m function";
    arr[2] = 587;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" " <<endl;
    }
    cout <<" go back to main function" <<endl;

}

int main()
{
    int num[3] = {4, 5, 2};
    update(num, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << "  ";
    }
    cout << endl;
}*/

//   PROGRAM FOR A SUM OF AN ARRAY
/*int main(){
    int arr[5]={3,-7,9,4,6};

    int ans = 0;

    for(int i=0;i<5;i++){
        ans = ans+arr[i];


    }
     cout<<" sum is : "<<ans<<" " << endl;

}*/

// LINEAR SEARCH ARRAY
/*bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    int arr[10] = {1, 3, 5, 7, 8, 2, 4, 6, 3, 7};
    cout << "Enter the element for check/search : " << endl;

    int key;
    cin >> key;

    int found = search(arr, 10, key);
    if (found)
    {
        cout << " it is present " << endl;
    }
    else
    {
        cout << " it is absent" << endl;
    }
}*/

//  Reverse an array
/*void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {    // swap -> swap is reverse function
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl;
}


int printArray(int arr[], int size){
  cout<<" Reverse of array is :";
    for(int i=0; i<size;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[7] = {1, 2, 3, 4, 5, 6, -7};
    int arr2[6] = {1, 2, -3, 4, -5, 6};

    reverse(arr1, 7);
    reverse(arr2, 6);

    printArray(arr1, 7);
    printArray(arr2, 6);
}*/

// REVERSE ALTERNATE
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int n)
{
    cout << "swap/reverse alternate answer  is : ";
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int odd[7] = {1, 2, 3, 4, 5, 6, -7};
    int even[6] = {1, 2, -3, 4, 11, 6};

    swapAlternate(odd, 7);
    printArray(odd, 7);

    swapAlternate(even, 6);
    printArray(even, 6);
    cout << endl;
}