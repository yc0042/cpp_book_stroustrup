#include "std_lib_facilities.h"

int main()
{
    vector<int> primes = {2};

    int max;

    cout << "Enter the number you want to find all primes up to: \n";
    cin >> max;
    for(int i = 3; i <= max; ++i)
    {
        bool is_prime = true;
        for(auto prime: primes)
        {
            is_prime = is_prime && (i % prime != 0);
            if(!is_prime) {break;}
        }
        if(is_prime) {primes.push_back(i);}
    }

    for(int i = 0; i < int{primes.size()}; ++i) {
        cout << "primes [" << i << "] = " << primes[i] << endl;
    }
    return 0;
}