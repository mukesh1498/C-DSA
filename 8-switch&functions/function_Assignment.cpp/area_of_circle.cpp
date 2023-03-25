#include <iostream>
using namespace std;

int areaofcircle(int r)
{
    int pi = 3.14;
    int area = (pi * r * r);
    return area;
}

int main()
{
    int r;
    cout << " enter the radius of circle : ";
    cin >> r;

    int ans = areaofcircle(r);
    cout << " Area of Circle is : " << ans << endl;
    return 0;
};
