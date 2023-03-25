#include <iostream>
using namespace std;

int main()
{
    int cel;
    cout << " enter the temp in Celcius: ";
    cin >> cel;

    double f = cel* 1.80+32;
    double k= cel+ 273.15;


    cout << " convert temp in farahneit : " << f << endl;
    ;
    cout << " Convert temp in kelvin :" << k<< endl;
    return 0;
}