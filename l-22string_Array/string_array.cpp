#include <iostream>
#include <string>
using namespace std;

char lowercase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';

        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (lowercase(a[s]) != lowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char naam[20];
    cout << " please enter your name :";
    cin >> naam;

    cout << " Your name is : " << naam << endl;
    int len = getlength(naam);
    cout << " length is " << len << endl;
    reverse(naam, len);
    cout << " revserse name is :" << naam << endl;

    cout << " palindrome or not : " << checkPalindrome(naam, len) << endl;

    cout << " Character is " << lowercase('T') << endl;

    return 0;
}