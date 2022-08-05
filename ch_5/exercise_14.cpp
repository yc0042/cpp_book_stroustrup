#include "std_lib_facilities.h"

int main()
{
    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;

    string temp_day;
    int temp_value;
    int invalid_day_count = 0;

    cout << "Enter a day (dupes allowed) and corresponding value for that day:\n";

    while(cin >> temp_day >> temp_value)
    {
        if (temp_day == "Sunday" || temp_day == "Sun" || temp_day == "sunday" || temp_day == "sun") {sunday.push_back(temp_value);}
        else if (temp_day == "Monday" || temp_day == "Mon" || temp_day == "monday" || temp_day == "mon") {monday.push_back(temp_value);}
        else if (temp_day == "Tuesday" || temp_day == "Tues" || temp_day == "tuesday" || temp_day == "tues") {tuesday.push_back(temp_value);}
        else if (temp_day == "Wednesday" || temp_day == "Wed" || temp_day == "wednesday" || temp_day == "wed") {wednesday.push_back(temp_value);}
        else if (temp_day == "Thursday" || temp_day == "Thurs" || temp_day == "thursday" || temp_day == "thurs") {thursday.push_back(temp_value);}
        else if (temp_day == "Friday" || temp_day == "Fri" || temp_day == "friday" || temp_day == "fri") {friday.push_back(temp_value);}
        else if (temp_day == "Saturday" || temp_day == "Sat" || temp_day == "saturday" || temp_day == "sat") {saturday.push_back(temp_value);}
        else {++invalid_day_count;}
    }

    cout << "The total for Sunday is " << accumulate(sunday.begin(), sunday.end(), 0) << "." << endl;
    cout << "The total for Monday is " << accumulate(monday.begin(), monday.end(), 0) << "." << endl;
    cout << "The total for Tuesday is " << accumulate(tuesday.begin(), tuesday.end(), 0) << "." << endl;
    cout << "The total for Wednesday is " << accumulate(wednesday.begin(), wednesday.end(), 0) << "." << endl;
    cout << "The total for Thursday is " << accumulate(thursday.begin(), thursday.end(), 0) << "." << endl;
    cout << "The total for Friday is " << accumulate(friday.begin(), friday.end(), 0) << "." << endl;
    cout << "The total for Saturday is " << accumulate(saturday.begin(), saturday.end(), 0) << "." << endl;
    cout << invalid_day_count << " invalid days were entered. smh\n";

    return 0;
}