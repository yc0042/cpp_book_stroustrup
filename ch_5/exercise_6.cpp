#include "std_lib_facilities.h"

double c_to_f(double c)
{
    if(c < -273.15) error("Temperature in Celsius below -273.15. Physically impossible!");
    return 1.8*c + 32;
}

double f_to_c(double f)
{
    if(f < -459.67) error("Temperature in Fahrenheit below -459.67. Physically impossible!");
    return (5/9)*(f-32);
}

int main()
try {
    double temp;
    char unit;
    cout << "Enter a temperature in units of Celsius or Fahrenheit (C/F) that you want converted to the other:\n";
    cin >> temp >> unit;

    double result;

    if(unit == 'c' || unit == 'C')
    {
        result = c_to_f(temp);
        cout << temp << " degrees Celsius is equivalent to " << result << " degrees Fahrenheit.\n";
    }
    else if(unit == 'f' || unit == 'F')
    {
        result = f_to_c(temp);
        cout << temp << " degrees Fahrenheit is equivalent to " << result << " degrees Celsius.\n";
    }
    else
    {
        error("invalid unit");
    }

    return 0;
}
catch(exception &e)
{
    cerr << e.what() << endl;
}
catch(...)
{
    cerr << "unknown error occurred :(" << endl;
}