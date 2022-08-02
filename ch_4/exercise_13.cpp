#include "std_lib_facilities.h"

int main()
{
    vector<int> numbers(101, 1);
    numbers[0] = 0;
    numbers[1] = 0;
    for(int i = 2; i <= 100; ++i)
    {
        if(numbers[i] == 1)
        {
            for(int j = 2*i; j < 100; j+=(i) )
            {
                numbers[j] = 0;
            }
        }
    }
    for(int i = 1; i < 100; ++i)
    {
        if(numbers[i])
        {
            cout << i << " is prime!" << endl;
        }
    }
}