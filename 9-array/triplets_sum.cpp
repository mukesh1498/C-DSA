#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 2, 2, 4, 5, 2};
    int targetsum = 7;
    int size = 6;

    int triplets = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[0] + array[j] + array[k] == targetsum)
                {
                    triplets++;
                }
            }
        }
    }
    cout <<triplets<<endl;
}