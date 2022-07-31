// Exercise 4
#include "std_lib_facilities.h"

int main()
{
    //TODO: smaller, larger, sum, difference, product, ratio
    double val1, val2;

    cout << "Input your two (floating) values: \n";
    cin >> val1 >> val2;
    auto smaller = min(val1, val2);
    auto larger = max(val1, val2);
    auto sum = val1+val2;
    auto difference = abs(val1-val2);
    auto product = val1*val2;
    

    cout << "The smaller of the two values is " << smaller << endl;
    cout << "The larger of the two values is " << larger << endl;
    cout << "The sum of the two values is " << sum << endl;
    cout << "The (absolute) difference of the two values is " << difference << endl;
    cout << "The product of the two values is " << product << endl;
    cout << "The ratio between the two values is " << val1/val2 << endl;

    return 0;
}