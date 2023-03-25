#include <iostream>
using namespace std;

int main()
{
    //  int a;
    // cin>>a;

    // cout<<"value of n is:"<< n <<endl;
    /*
    if(a>0){
       cout<<" A is positive" <<endl;
    }else{
       cout<<"a is negetive" <<endl;
    }*/

    /*  CHECK YOUR AGE
        int a;
        cout << "Enter of your age  is:" << endl;
        cin >> a;
        if (a > 50)
        {
            cout << "you are  old" << endl;
        }
        else if(a < 15)
        {
            cout << " you are child" << endl;
        }
        else
        {
            cout << " you are young" << endl;
        }*/
    /*
        int a = 9;
        if (a == 9)
        {
            cout << "NINE";
        }
        else if (a > 0)
        {
            cout << "positive";
        }
        else
        {
            cout << "NEGETIVE";
        }*/

    /*
        int a = 2;
        int b = a + 1;

        if ((a = 3) == b)
        {
            cout << a;
        }
        else
        {
            cout << a + 2;
        }*/

    /*
        int n;
       cout<<"enter the value of n is ";
        cin >> n;


        int i = 0;
         int sum = 0 ;
        while (i <= n)
        {
          sum = sum + i;
            i = i + 2;
        }
        cout<<" the value of even number is: "<<sum <<endl;
       */

    /* CHECK PRIME NUMBER*/
    int n;
    cout << "enter the value of n :";
    cin >> n;

    int i = 2;

    while (i < n)
    {
        // divide hogya, not prime
        if (n % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "prime for " << i << endl;
        }
        i = i + 1;
    }
}