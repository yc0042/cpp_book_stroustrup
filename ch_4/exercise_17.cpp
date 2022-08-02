#include "std_lib_facilities.h"

bool sortbysec(const pair<string,int> &a, const pair<string,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<pair<string, int>> values;

    cout << "Enter a sequence of string values!\n";

    string temp;
    while(cin >> temp)
    {
        bool in_values = false;
        for(auto i = 0; i < (int)values.size(); ++i)
        {
            if (values[i].first == temp)
            {
                values[i].second = values[i].second + 1;
                in_values = true;
                break;
            }
        }
        if(!in_values)
        {
            values.push_back(make_pair(temp, 1));
        }
    }

    sort(values.begin(), values.end());
    cout << "The min of the set is " << values[0].first << ".\n";
    cout << "The max of the set is " << values.back().first << ".\n";
    std::sort(values.begin(), values.end(), sortbysec);
    cout << "The mode of the set is " << values.back().first << " which occurs " << values.back().second <<" time.\n";
    
    return 0;
}