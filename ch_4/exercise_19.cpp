#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a name and the corresponding score\n";

    string name;
    int score;

    vector<string> names;
    vector<int> scores;

    while(cin >> name >> score)
    {
        bool in_names = false;
        for(auto existing_name : names)
        {
            in_names = in_names || (existing_name == name);
            if(in_names) {break;}
        }
        if(name == "NoName" && score == 0) {break;}
        else if(!in_names)
        {
            names.push_back(name);
            scores.push_back(score);
        }
        else
        {
            cout << "You entered a name that was previously entered!" << endl;
        }
    }

    for(int i = 0; i < (int)names.size(); ++i)
    {
        cout << names[i] << " " << scores[i] << endl;
    }
    return 0;
}