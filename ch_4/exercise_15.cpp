#include "std_lib_facilities.h"

int main()
{
    vector<int> primes = {2};
    int max_val;

    cout << "Enter the number of primes you want to find: \n";
    cin >> max_val;
    int i = 3;

    while(primes.size() < max_val)
    {
        bool is_prime = true;
        for(auto prime: primes)
        {
            is_prime = is_prime && (i % prime != 0);
            if(!is_prime) {break;}
        }
        if(is_prime) {primes.push_back(i);}
        i += 2;
    }

    for(int i = 0; i < int{primes.size()}; ++i) {
        cout << "primes[" << i << "] = " << primes[i] << endl;
    }
    return 0;
}