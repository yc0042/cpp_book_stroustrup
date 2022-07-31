#include "std_lib_facilities.h"

int main()
{
    int val;
    cout << "Enter an integer value: \n";

    cin >> val;

    string message = to_string(val) + " is ";
    if((bool)val % 2) {message += "not even! \n";}
    else {message += " even! \n";}

    cout << message;
    return 0;
}