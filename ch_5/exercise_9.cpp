// copied Exercise 8 cuz what is the problem statement???
#include "std_lib_facilities.h"

int main()
try {
    int N;
    cout << "Enter the number of integers you want to sum." << endl;
    cin >> N;
    vector<int> values;
    cout << "Enter some integers:\n";
    for(int temp; cin >> temp;)
    {
        values.push_back(temp);
    }

    int result = 0;

    if(N > values.size()) error("Less integers than the requested amount to sum.");

    for(int i = 0; i < N; ++i)
    {
        result += values[i];
    }
    cout << "The sum of the first " << N << " integers that you entered is " << result << "!\n";
    return 0;
}
catch(exception &e)
{
    cerr << e.what() << endl;
    return 1;
}
catch(...)
{
    cerr << "An unknown error occurred. :(" << endl;
    return 2;
}