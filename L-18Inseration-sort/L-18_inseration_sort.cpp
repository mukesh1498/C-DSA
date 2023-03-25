#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {3,1, 2, 2};

    // Write your code here.
    for (int i = 1; i < 4; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        cout << arr[j+1] = temp;
        // cout <<arr[i] <<" ";
    }



    // BY USING WHILE LOOP 
      int i =1;
    while( i<4 ){
        int temp= arr[i];
        int j= i-1;
        i++;
        while(j>=0){
            
            if(arr[j]> temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            } 
        j--;}
        arr[j+1]= temp;
    }
}


