// Exercise 1: skipped
// Exercise 2

#include "std_lib_facilities.h"

int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read into temp
    temps.push_back(temp); // put temp into vector
    
    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps); // sort temperatures
    if(int{temps.size()}%2 == 0)
    {
        cout << "Median temperature: " << (temps[temps.size()/2-1]+temps[temps.size()/2])/2 << '\n'; 
    }
    else 
    {
        cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    }
    return 0;
}