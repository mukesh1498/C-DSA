#include <iostream>
#include <string>

using namespace std;

char getMaxOccurance(string s)
{

    int arr[26] = {0};
   
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
         int number=0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {// uppercase 
            number = ch - 'A';
        }
         arr[number]++;
       
    }

    // find max occurance
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main()
{

    string s;
    cout << " please enter the word;";
    cin >> s;

    cout << " max number of occurance : " << getMaxOccurance(s) << endl;
return 0;
}