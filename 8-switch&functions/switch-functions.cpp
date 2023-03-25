#include <iostream>
using namespace std;

int main()
{
    // switch implentation with char , int
    /*  int num;
      char ch = '1';
      cout << " please eneterr the num";
      // cout << " please eneterr the char";

      cin >> num;

      switch (num)
      {
      case 1:
          cout << "first conditoin" << endl;
          // break;
      case 2:
          cout << "2 numbrer" << endl;
          break;
      case '1':
          switch (num)
          {
          case 5:
              cout << " that number is " << num << endl;
              break;
          }
          cout << "charcyer condition " << endl;
          break;

      default:
          cout << "default condition case " << endl;
          break;
      }
      cout << endl;

    // switch in infinite loop

   /* int i = 1;
    while (1)
    {
        switch (i)
        {
        case 1:
            cout << "that is int number" << i << endl;

        default:
            cout << "jhgfd";
            exit(i);
        }
    }
    */

    // Calculator
    /*float a, b;

    cout << "enter the value of a" << endl;
    cin >> a;

    cout << "enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "enter the  operation " << endl;
    cin >> op;

    switch (op)
    {
    case '*':
       { cout << "answer is" << (a * b);}
        break;
    case '/':
        cout << "answer is" << (a / b);
        break;
    case '+':
        cout << "answer is" << (a + b);
        break;
    case '-':
        switch (op)
        {
        case '-':
            cout << "switch case answer is " << (b -a) << endl;
            break;

        default:
            break;
        }
        cout << "answer is" << (a - b);
        break;

    default:
        cout << "please enter the operation" << endl;
        break;
    }*/



    // to count the total number of notes 
    
    int totalamount;
    cout << " please enter your total amount" << endl;
    cin >> totalamount;
    int x = 100;
    int y = 50;
    int z = 20;
    int g = 10;
    int t = 1;

    int check100;
    int check50;
    int check20,  check10,  check1;
    check100 = 0;
    check50 = 0;
    check20 = check10 = check1 = 0;
    switch (totalamount >= 100)
    {
    case 1:

        check100 = totalamount / x;
        totalamount -= check100 * x;
        cout << "notes of 100 rupess " << check100 << endl;
        break;
    }
    switch (totalamount >= 50)
    {
    case 1:

        check50 = totalamount / y;
        totalamount -= check50 * y;
        cout << "notes of 50 rupess " << check50 << endl;
        cout << " left amount " << totalamount << endl;
        break;
    }
     switch (totalamount >= 20)
    {
    case 1:

        check20 = totalamount / z;
        totalamount -= check20 * z;
        cout << "notes of 20 rupess " << check20 << endl;
        cout << " left amount " << totalamount << endl;
        break;
    }
      switch (totalamount >= 10)
    {
    case 1:

        check10 = totalamount / g;
        totalamount -= check10 * g;
        cout << "notes of 10 rupess " << check10 << endl;
        cout << " left amount " << totalamount << endl;
        break;
    }
      switch (totalamount >= 1)
    {
    case 1:

        check1 = totalamount / t;
       
        cout << "notes of 1 rupess " << check1 << endl;
        break;

        default: 
        cout<< "totaly counted notes" <<endl;

    }
}
