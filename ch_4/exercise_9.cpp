#include "std_lib_facilities.h"

int power_of_two(int power)
{
    int result = 1;
    for(auto i = 0; i < power; ++i)
    {
        result *= 2;
    }
    return result;
}

int main()
{
    int sum_of_powers = 0;
    bool k_flag = false;
    bool m_flag = false;
    bool b_flag = false;

    int current_power;

    for(int i = 0; i < 64; ++i)
    {
        current_power = power_of_two(i);
        sum_of_powers += current_power;
        cout << "For " << i+1 << " squares, the amount of rice is " << sum_of_powers << " grains. \n";
    }
    
    return 0;
}