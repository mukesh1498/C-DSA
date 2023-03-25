#include <iostream>
using namespace std;

// int main()
// {

//    // int i=0; && j<n-i-1;
//     int arr[6] = {7, 1, 6, 10, 9, 14};
//     for (int i = 0; i < 6; i++)
//   //  from 0 to n-1
//     {

//         for (int j = 0; j < 6 - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);

//             }
//         }
//         cout<< arr[i] << " "  ;
//     }
// }

int main()
{

    // int i=0; && j<n-i-1;
    int arr[8];
    cout << "enter the array 8 element for bubble sorting :";
    cin >> arr[8];
    for (int i = 0; i < 8; i++)
    //  from 0 to n-1
    {

        for (int j = 1; j < 8 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << arr[i] << " ";
    }
}