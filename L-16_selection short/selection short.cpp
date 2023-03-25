//selection sort 
#include <iostream>
using namespace std;

void selectionSort( int arr[], int n)
{   
   for (int i = 0; i<(n-1); i++ ){
       int minIndex =i;
  
       for (int j= i+1; j<n; j++){
           if(arr[j] < arr[minIndex])
           
               minIndex = j ;
           }
       
       swap(arr[minIndex] , arr[i]);
   }
    
}

int main( ){
   int example[4] = {8,7,4,3};

     selectionSort(example, 4);

    cout << " answer is " <<endl;
    return 0;
}