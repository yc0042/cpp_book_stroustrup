// Exercise 1: Skipped
// Exercise 2
// #include "std_lib_facilities.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double mi_to_km = 1.609;
    double input_mi;
    cout << "Enter in a distance in miles that you want to convert to kilometers: \n";
    cin >> input_mi;
    double input_km = input_mi*mi_to_km;
    cout << input_mi << " miles is equivalent to " << input_km << " kilometers. \n";
    return 0;
}
