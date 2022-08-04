// Exercise 1: Skipped 
#include "std_lib_facilities.h"

class bad_temp {};

double ctok(double c)
{
    if(c < -273.15) throw bad_temp{};
    double k = c + 273.15;
    return k;
}

int main()
try {
    double d;
    cout << "Enter a temperature in Celsius that you want to convert to Kelvin:\n";
    cin >> d;
    double k =ctok(d);
    cout << d << " degrees Celsius is equivalent to " << k << " degrees Kelvin.\n";
    return 0;
}
catch (bad_temp)
{
    cerr << "You entered a temperature that was too low ( T < -273.15)\n";
}
catch (...)
{
    cerr << "An unknown error occurred!\n";
}