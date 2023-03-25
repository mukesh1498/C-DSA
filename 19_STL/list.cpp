#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    list<int> n(5, 200);
    cout << " printing n " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(222);
    l.push_front(1111);

    for (int i : l)
    {
        cout << i << " " << endl;
    }

    l.erase(l.begin());
    cout << " after erase : ";
    for (int i : l)
    {
        cout << i << " ";
    }

    cout<<" size of list  : "<<l.size();
}