#include <iostream>
using namespace std;
int main()
{

    // int n;
    // cout<< "please enter the value of n";
    // cin>>n;
    // int i=1;
    // //  int count = 1;
    // while(i<=n){

    //     int j =1;
    // int  start = n-i;
    //     while(j<=i){
    //        cout  << "*";
    //        n-i+1;
    //         // cout<<value;
    //         // value= value+1;
    //         j=j+1;
    //     }cout<<endl;
    //      i = i+1;
    // }

    /*
        int n;
        cin >> n;

        int i = 1;
        int count = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= n)
            {
                cout << count << " ";
                count = count+1;
                j = j + 1;
            }
            cout << endl;
            i = i + 1;
        }
    output- 5
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
        */

    /*  TRIANGLE PATTERN STAR WITH  NUMBER
        int n;
        cin >> n;

        int row = 1;
        while (row <= n)
        {

            int col = 1;
            while (col <= row)
            {
                cout <<row<<"* ";
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }*/

    /*TRIANGLE PATTERN with counting
   5
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5

       int n;
       cin >> n;

       int row = 1;
       while (row <= n)
       {

           int col = 1;
           int   count=1;
           while (col <= row)
           {
               cout<<count <<" ";
                count= count+1;
               col = col + 1;
           }
           cout << endl;
           row = row + 1;
       }
   */
    /*5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

    /* reverse counting
         8
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    6 5 4 3 2 1
    7 6 5 4 3 2 1
    8 7 6 5 4 3 2 1


        int n;
        cin >> n;

        int row = 1;

        while (row <= n)
        {
            int col = 1;

            while (col <= row)
            {
                cout <<row-col+1<<" ";

                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }*/

    /*
    program for print square box with same col character
    3
    AAA
    BBB
    CCC
        int n;
        cin >> n;

        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                char ch = 'A' + i - 1;
                cout << ch;
                j = j + 1;
            }
            cout << endl;
            i = i + 1;

             3
            AAA
            BBB
            CCC
 }*/
    //     int n;
    //     cin >> n;

    //     int row = 1;

    //     while (row <= n)
    //     {

    //        // int col = 1;
    // char value = 'A'+1;
    //         while (value <= row)
    //         {

    //             cout << value;
    //             value = value + 1;
    //         }
    //         cout << endl;
    //         row = row + 1;
    //     }

    int n;
    cout << "print n";
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        // print space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        //   second triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        // third triangle with n-1
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
       cout<<endl;
       i=i+1;
    }
}
