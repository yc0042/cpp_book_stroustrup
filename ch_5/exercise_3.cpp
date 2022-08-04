// Exercise 1: Skipped 
#include "std_lib_facilities.h"

class bad_temp {};

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
try {
    double d;
    cout << "Enter a temperature in Celsius that you want to convert to Kelvin:\n";
    cin >> d;
    if(d < -273.15) error("Temperature was too low ( T < -273.15)");
    double k =ctok(d);
    cout << d << " degrees Celsius is equivalent to " << k << " degrees Kelvin.\n";
    return 0;
}
catch (exception &e)
{
    cout << e.what() << endl;
}