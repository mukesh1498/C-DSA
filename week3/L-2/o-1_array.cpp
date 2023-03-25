#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr{0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1};
    int s = 0;
    int e = arr.size() - 1;
    int i = 0;

    while (i != e)
    {
        if (arr[i] == 0)
        {
            swap(arr[s], arr[i]);
            s++;
            i++;
        }
        else
        {
            swap(arr[e], arr[i]);
            e--;
        }
    }

    // print by For each loop
    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}