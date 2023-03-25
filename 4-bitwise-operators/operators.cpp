#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
   int a;
    int b;
      cout << "please enter the a ";

cin>> a;
cout << "please enter the b ";
cin>>b;
    cout << " a&b" << (a&b) << endl;
    cout << " a|b" << (a|b) << endl;
    cout << " a~b" << (~a) << endl;
    cout << " a^b" << (a^b) << endl;


cout<<"left shifting and Right shifting"<<endl;
   // left operator is like divide
    cout << (17>>1) <<endl;
    cout << (17>>2) <<endl;
    // right operator is like multiply
    cout << (19<<1) <<endl;
    cout << (21<<2) << endl;*/

    /*  int a = 2;
    int  b = a++;
    int c = ++a;
    cout<< b <<endl;
    cout<< c;*/

    // for checking continue and break keyord;
    /* for(int i=1; i<=3; i++){
         cout << "hlo" << endl;
  cout << "kiya h" << endl;
  break;
   cout << "hlo" << endl;
     }
      cout << "hlo222" << endl;
      */
    /*1
     for (int i = 1; i <=5; i++)
     {
        cout<< i <<" ";
             i++;
     }
     */

    /* Ex-2
        for (int i = 0; i <= 15; i += 2)
        {
            cout << i << " ";

            if (i & 1)
            {continue;
            }
           // i++;
        }
        */

    // EX-3
    /* 1 0 2 0 3 0 4 0 5 0
       for (int i = 0; i < 5; i++)
      {
          for (int j = 0; j <= 5; i++)
          {
              if (i + j == 10)
              {
                  cout << "ffff" << endl;
                  break;
              }
              cout << i << " " << j << endl;
          }
      }*/

    //   for (int i = 5, b=1, c= 4  ; i>=0&& b>=1&& c>=2 ; i--, b--,c--  )
    //   {
    //     cout << i << " "<<b <<c  <<endl;

    //   }

    // decimal to binary
    /* int n;
     cout<< " please enter value of n";
     cin>>n;

     int ans = 0;
     int i = 0;
     while (n != 0)
     {
       int bit = n & 1;
       ans = (bit * pow(10, i)) + ans;
       n = n >> 1;
       i++;
     }

     cout << "Answer is " << ans << endl;
     */

    // Decimal to Binary
    int n;
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {

        int digit = n % 10;
        if(digit == 1){
        ans = ans + pow(2, i);
        }
        n = n/10;
        i++; 
    }
    cout <<"answer is "<< ans << endl;
}