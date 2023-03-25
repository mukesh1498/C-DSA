#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

int arr[13] = {2, 12, 2, 11, -12, 2, -1, 2, 2, 11, 12, 2, -6};
int n = 13;

unordered_map<int,int> count;

    int maxFreq =0;
    int maxAns =0;
     int ans =0;

    for(int i=0; i<n; i++){
        ans= count[arr[i]]++;

        maxFreq = max(maxFreq, count[arr[i]]);
        cout<< ans<< " " ;
        // cout<< endl;
         cout<<maxFreq<< " ";
    }
    cout<<endl;
   
    for(int i=0; i<n; i++){
        if(maxFreq == count[arr[i]]){
          maxAns = arr[i];
         
        }

    }
     cout<< maxAns <<" " ;
    

return 0;
};