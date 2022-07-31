// Exercise 6
#include "std_lib_facilities.h"
// #include <format>

int main()
{
    string values[3];

    cout << "input 3 strings: \n";
    cin >> values[0] >> values[1] >> values[2];

    sort(values, values+3);
    cout << values[0] << ", " << values[1] << ", " << values[2] << endl;
    return 0;
}