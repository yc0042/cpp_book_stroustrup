#include "std_lib_facilities.h"

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<pair<int, int>> values;

    cout << "Enter a sequence of integer values!\n";

    int temp;
    while(cin >> temp)
    {
        bool in_values = false;
        for(auto value: values)
        {
            if (value.first == temp)
            {
                value.second += 1;
                in_values = true;
                break;
            }
        }
        if(!in_values)
        {
            values.push_back(make_pair(temp, 1));
        }
    }


    sort(values.begin(), values.end(), sortbysec);
    cout << "The mode of the set is " << values.back().first << ".\n";
    return 0;
}