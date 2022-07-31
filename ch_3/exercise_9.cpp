#include "std_lib_facilities.h"

int main()
{
    string val;
    cout << "Enter a spelled-out number (up to 4) \n";
    cin >> val;
    string message = "Your number is ";

    if(val == "one") {
        message += "1 \n";
    }
    else if (val == "zero") {
        message += "0 \n";
    }
    else if (val == "two") {
        message += "2 \n";
    }
    else if (val == "three") {
        message += "3 \n";
    }
    else if (val == "four") {
        message += "4 \n";
    }
    else {
        message = "I don't know your number!!\n";
    }

    cout << message;
    return 0;

}