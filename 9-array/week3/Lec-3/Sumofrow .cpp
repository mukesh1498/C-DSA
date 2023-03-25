#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int col)
{
  for (int i = 0; i < rows; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum = sum += arr[i][j];
    }
    cout << sum << endl;
  }
}
int main()
{
  // SUM OF ALL ONE BY ONE ROW
  int arr[4][3];
  int row = 4;
  int col = 3;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  printRowWiseSum(arr, 4, 3);

  return 0;
};