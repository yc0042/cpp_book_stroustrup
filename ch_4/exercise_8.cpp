#include "std_lib_facilities.h"

uint64_t power_of_two(uint64_t power)
{
    uint64_t result = 1;
    for(auto i = 0; i < power; ++i)
    {
        result *= 2;
    }
    return result;
}

int main()
{
    uint64_t sum_of_powers = 0;
    bool k_flag = false;
    bool m_flag = false;
    bool b_flag = false;

    uint64_t current_power;

    for(uint64_t i = 0; i < 64; ++i)
    {
        current_power = power_of_two(i);
        sum_of_powers += current_power;
        if(sum_of_powers >= 1000 && !k_flag)
        {
            cout << "It would take the amount of rice for " << i << " squares to reach 1000 grains. \n";
            k_flag = true;
        }
        if(sum_of_powers >= 1000000 && !m_flag)
        {
            cout << "It would take the amount of rice for " << i << " squares to reach 1000000 grains. \n";
            m_flag = true;
        }
        if(sum_of_powers >= 1000000000 && !b_flag)
        {
            cout << "It would take the amount of rice for " << i << " squares to reach 1000000000 grains. \n";
            b_flag = true;
            break;
        }
    }
    return 0;
}