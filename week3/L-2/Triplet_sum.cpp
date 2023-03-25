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
        int element1 = arr[i];
        // cout<< " we are at "<<arr[i] <<endl;

        // for every element , will traverse on aage vala element
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for(int k = j+1; k<arr.size(); k++){
                int element3 = arr[k];

                
            //   cout<< "("<< element <<", " << arr[j]<< " )" <<endl;
            if ((element1 + element2 + element3) == sum) 
            {
                cout << "pair sum " << element1 << " , " << element2 << " , " << element3<< endl;
            }
            }
            
        }
    }

    return 0;
}