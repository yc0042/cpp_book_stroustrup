#include "std_lib_facilities.h"

int main()
{
    int num_pennies, num_nickels, num_dimes, num_quarters, num_half_dollars;

    cout << "How many pennies do you have? \n";
    cin >> num_pennies;
    cout << "How many nickels do you have? \n";
    cin >> num_nickels;
    cout << "How many dimes do you have? \n";
    cin >> num_dimes;
    cout << "How many quarters do you have? \n";
    cin >> num_quarters;
    cout << "How many half_dollars do you have? \n";
    cin >> num_half_dollars;

    cout << "You have " << num_pennies + 5*num_nickels + 10*num_dimes + 25*num_quarters + 50*num_half_dollars << " cents. \n";
    return 0;
}