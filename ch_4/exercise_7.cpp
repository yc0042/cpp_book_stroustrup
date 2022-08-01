// Exercise 7: Skipped
#include "std_lib_facilities.h"

int main()
{
    double val1, val2;
    char operation;

    cout << "Input two values and the operation you want applied. \n";
    while(cin >> val1 >> val2 >> operation)
    {
        if(operation == '+')
        {
            cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << ".\n";
        }
        else if(operation == '-')
        {
            cout << "The (absolute) difference of " << val1 << " and " << val2 << " is " << abs(val1 - val2) << ".\n";
        }
        else if(operation == '*')
        {
            cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << ".\n";
        }
        else if(operation == '/')
        {
            cout << "The quotient of " << val1 << " and " << val2 << " is " << val1 / val2 << ".\n";
        }
        cout << "Input two values and the operation you want applied. \n";
    }
    return 0;
}