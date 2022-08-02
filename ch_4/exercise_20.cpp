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

    cout << "Inputting of scores complete!\n Now enter in a name and the system will print out the corresponding score!\n";

    string requested_name;

    while(cin >> requested_name)
    {
        bool found = false;
        for(int i = 0; i < (int) names.size(); ++i)
        {
            if(requested_name == names[i])
            {
                cout << "The score corresponding to " + requested_name + " is " << scores[i] << endl;
                found = true;
            }
        }
        if(!found) {cout << "Name not found :(\n";}
    }
    return 0;
}