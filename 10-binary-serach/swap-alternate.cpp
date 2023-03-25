#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{ 
    for (int i = 0; i < n; i++)
    {
       cout<< arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)

{ cout << "swaping number is :" ;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
           // swap(arr[i], arr[i + 1]); // when we dont use swap function 
         int   tmp=arr[i];
           arr[i]=arr[0];
           arr[0]=tmp;
        }
    }
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {11, 22, 0, 44, 55};
     swapAlternate(even, 6);
    printArray(even, 6);

     swapAlternate(odd, 5);
    printArray(odd, 5);


    cout << endl;
    return 0;
}