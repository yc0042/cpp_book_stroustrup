#include "std_lib_facilities.h"

int main()
{
    int count = 0;
    int a = 1; 
    int b = 1;
    int c = a + b;
    cout << "The following numbers are the Fibonacci sequence, until the limit of the 32-bit integer data type is reached.\n";
    cout << a << endl << b << endl;
    while(c > 0)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    return 0;
}