#include <iostream>
#include <set>

int main()
{
    set <int> set;
    set.insert(5);
    set.insert(5);
    set.insert(5);
    set.insert(22);
    set.insert(22);
    set.insert(22);
    set.insert(0);
    set.insert(50);
    for (auto i : set)
    {
        cout << i << endl;
    }
}
