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
            break;
        }
    }

    cout << "Inputting of scores complete!\n Now enter in a score and the system will print out the corresponding name!\n";

    int requested_score;

    while(cin >> requested_score)
    {
        bool found = false;
        for(int i = 0; i < (int) names.size(); ++i)
        {
            if(requested_score == scores[i])
            {
                cout << "The name corresponding to " << requested_score << " is " << names[i] << endl;
                found = true;
            }
        }
        if(!found) {cout << "Score not found :(\n";}
    }
    return 0;
}