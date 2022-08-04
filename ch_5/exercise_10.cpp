// copied Exercise 8 cuz what is the problem statement???
#include "std_lib_facilities.h"

int main()
try {
    int N;
    cout << "Enter the number of values you want to sum." << endl;
    cin >> N;
    vector<double> values;
    cout << "Enter some numbers:\n";
    for(double temp; cin >> temp;)
    {
        values.push_back(temp);
    }

    double result = 0;

    if(N > values.size()) error("Less numbers than the requested amount to sum.");

    vector<double> differences;

    for(int i = 0; i < N; ++i)
    {
        result += values[i];
    }
    for(int i = 1; i < values.size();++i)
    {
        differences.push_back(values[i]-values[i-1]);
    }
    cout << "The sum of the first " << N << " numbers that you entered is " << result << "!\n";
    cout << "The differences between the first " << N << " adjacent values is ";
    for(int i = 0; i < N-1;++i)
    {
        cout << differences[i] << " ";
    }
    cout << endl;
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