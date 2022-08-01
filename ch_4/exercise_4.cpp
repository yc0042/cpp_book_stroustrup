#include "std_lib_facilities.h"

int exponent(int power)
{
    int result = 1;
    for(int i = 0; i < power; ++i)
    {
        result *= 2;
    }
    return result;
}

int main()
{
    bool found = false;
    int guess = 64;
    bool less_than;
    int iteration = 1;
    int min_val = 0;
    int max_val = 128;
    char input;

    while(!found && iteration != 8)
    {
        cout << "Is your number less than " << guess << "? (Y/n)" << endl;
        cin >> input;
        if(input == char{'y'} || input == 'Y')
        {
            less_than = true;
            max_val = min(max_val, guess);
        }
        else
        {
            less_than = false;
            min_val = max(min_val, guess);
        }
        
        if(!less_than)
        {
            guess += exponent(6-iteration);
        }
        else
        {
            guess -= exponent(6-iteration);
        }

        if(iteration == 7 && less_than)
        {
            cout << "Your number must be " << max_val-1 << "!! \n";
            break;
        }
        if(!less_than && iteration == 7)
        {
            cout << "Your number must be " << min_val << "!! \n";
            break;
        }

        ++iteration;
    }
    return 0;
}