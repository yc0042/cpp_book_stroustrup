#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter the number up to which you find all the primes for. \n";
    int max_val = 0;
    //cout << "got to check 1";
    cin >> max_val;
    //cout << "got to line " << 8;
    vector<int> numbers(max_val, 1);
    numbers[0] = 0;
    numbers[1] = 0;
    for(int i = 2; i <= max_val; ++i)
    {
        if(numbers[i] == 1)
        {
            for(int j = 2*i; j <= max_val; j+=(i) )
            {
                numbers[j] = 0;
            }
        }
    }
    for(int i = 1; i <= max_val; ++i)
    {
        if(numbers[i])
        {
            cout << i << " is prime!" << endl;
        }
    }
}