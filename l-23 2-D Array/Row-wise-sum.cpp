#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
       
    }
    return 0;
}

// to print row wise sum
void printsum(int arr[][3], int i, int j){
    cout<< " prnting the sum ->";
    for (int i = 0; i < 3; i++)
    {int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
           
        }
        cout<< sum <<" ";
       
    }
    cout<<endl;
    
}

int main()
{
    int arr[3][3];

    // takin input row wise
    cout << " enter the element of an array : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Enter the element for search " << endl;
    int target;
    // cout<< " enter a number as a target  :";
    cin >> target;

    if (isPresent(arr, target, 3, 3))
    {
        cout << " Element found" << endl;
    }
    else
    {
        cout << " Not found" << endl;
    }

   printsum(arr,3,3);


    return 0;
}