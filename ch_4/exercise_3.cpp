#include "std_lib_facilities.h"

int main()
{

    double sum_of_distances = 0;
    double count = 0;
    vector<double> distances;
    for(double temp; cin >> temp;)
    {
        distances.push_back(temp);
        sum_of_distances += temp;
        ++count;
    }
    std::sort(distances.begin(), distances.end());
    
    cout << "The total distance is " << sum_of_distances << ".\n";
    cout << "The smallest distance is " << distances[0] << " and the largest distance is " << distances.back() << ".\n";
    cout << "The average distance is " << sum_of_distances/count << ".\n";

    return 0;    
}