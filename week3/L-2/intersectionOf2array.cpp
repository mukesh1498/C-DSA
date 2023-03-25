#include<iostream>
#include<vector>
 using namespace std;

  int main(){
 int arr1[] ={1,2,3,4,5};
    int size1=5;
    int arr2[] = {1,2,3};
     int sizeb =3;
  vector<int> ans;

       
       for(int i=0;i<size1; i++ ){
        int element = arr1[i];
        
        for(int j=0; j<sizeb;j++){
            if(element == arr2[j]){
                // amrk kr do  2 se jada element h
                
                arr2[j] == -1; // mark the same number 
                ans.push_back(element);
            }
        }
       }
   
   cout << "Intersection value is: ";
   for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
   }

 };