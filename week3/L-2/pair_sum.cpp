#include <iostream>
#include <vector>

using namespace std;
// find a pair that upon addition gives value equal to sum

// aise 2 number print krvao jisse 9 sum aaye
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum ;
    cout<< " enter the find sum : ";
    cin>>sum;
    // print vector value
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // cout<< " we are at "<<arr[i] <<endl;

        // for every element , will traverse on aage vala element
        for (int j = i + 1; j < arr.size(); j++)
        {
            //   cout<< "("<< element <<", " << arr[j]<< " )" <<endl;
            if ((element + arr[j]) == sum) 
            {
                cout << "pair sum " << element << ", " << arr[j] << endl;
            }
            if( element * arr[j] == sum){
                cout<< "pair multiple " << element << "," << arr[j] <<endl;
            }
        }
    }

    return 0;
};