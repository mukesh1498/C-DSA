#include<iostream>
#include<vector>
using namespace std;



int  findUnique(vector<int> arr ){
    int n=arr.size();
    int ans=0;
   for(int i=0; i<n; i++){
    ans = ans^arr[i];
   }
   return ans;

}
int main(){

    int n;
    cout<< " enter the size of vector";
    cin>>n;

    vector<int> arr(n);
   cout<< " enter the value " <<endl;

   for(int i=0; i<arr.size(); i++){
    cin>> arr[i];

   }

   int uniqueElement= findUnique(arr);

   cout<<" Unique number is: "<< uniqueElement << endl;

return 0;
};