// Exercise 1: Skipped 
#include "std_lib_facilities.h"

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double d;
    cout << "Enter a temperature in Celsius that you want to convert to Kelvin:\n";
    cin >> d;
    double k =ctok(d);
    cout << d << " degrees Celsius is equivalent to " << k << " degrees Kelvin.\n";
    return 0;
}