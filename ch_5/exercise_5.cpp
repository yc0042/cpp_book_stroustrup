#include "std_lib_facilities.h"

double ctok(double c)
{
    if(c < -273.15) error("Temperature below -273.15 Celsius. Impossible\n");
    double k = c + 273.15;
    return k;
}
double ktoc(double k)
{
    if(k < 0) error("Temperature below 0 Kelvin. Impossible!\n");
    return (k-273.15);
}

int main()
try {
    double d;
    char unit;
    cout << "Enter a temperature with its unit (C/K) that you want to convert to the other:\n";
    cin >> d >> unit;

    double result;

    if(unit == 'k' || unit == 'K') 
    {
        result = ktoc(d);
        cout << d << " degrees Kelvin is equivalent to " << result << " degrees Celsius.\n";
    }
    else if (unit == 'c' || unit == 'C')
    {
        result = ctok(d);
        cout << d << " degrees Celsius is equivalent to " << result << " degrees Kelvin.\n";
    }
    else
    {
        error("Invalid unit entered!\n");
    }

    return 0;
}
catch (exception &e)
{
    cerr << e.what() << endl;
}
catch (...)
{
    cerr << "An unknown error occurred!\n";
}