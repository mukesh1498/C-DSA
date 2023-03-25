#include <iostream>
using namespace std;

// how to create 2d array dynamically
// input/output
// memory release / free kaise krne hai

int main()
{
    int row;
    cout << " enter the no of row  ";
    cin >> row;

    int col;
    cout << " enter the no of column   ";
    cin >> col;

    // creating a 2D Array
    int **arr = new int *[row]; // new int *[row] is a row of 2D array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // arr[i] row ke andar col ki sarri element aa gye
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // output of an 2-D array
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // releasing memory of 2D array
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // colum
    }

    // delete row
    delete[] arr;
    return 0;
}