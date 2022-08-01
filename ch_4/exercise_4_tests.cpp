#include "std_lib_facilities.h"

int exponent(int power)
{
    int result = 1;
    for(int i =0; i < power; ++i)
    {
        result *= 2;
    }
    return result;
}

bool pass(int input)
{
    int min_val = 0;
    int max_val = 128;
    bool less_than;
    bool found = false;
    int iteration = 1;
    int guess = 64;
    while(!found && iteration != 8)
    {

        // cout << "Is your number less than " << guess << "? (Y/n)" << endl;
        // cin >> input;
        if(input < guess)
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
            // cout << "Your number must be " << max_val-1 << "!! \n";
            return input == max_val - 1;
        //    break;
        }
        if(!less_than && iteration == 7)
        {
            //cout << "Your number must be " << min_val << "!! \n";
            return input == min_val;
        //    break;
        }
        ++iteration;
    }
    return false;
}

int main()
{
    int pass_count = 0;
    int test_count = 0;
    for(int i = 1; i != 129; ++i)
    {
        pass_count += int{pass(i)};
        if(!pass(i))
        {
            cout << "The code failed the test with " << i << " as input! \n";
        }
        ++test_count;
    }
    cout << "The code passed " << pass_count << " out of " << test_count << "tests! \n";
    return 0;
}