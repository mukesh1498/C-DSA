#include <iostream>
using namespace std;

bool ispalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        return ispalindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string str = "bookkoob";

    bool palindrome = ispalindrome(str, 0, str.length() - 1);

    if (palindrome)
    {
        cout << " it is a palindrome" << endl;
    }
    else
    {
        cout << " it is not a palindrome" << endl;
    }  
}