#include "std_lib_facilities.h"

int main()
{
    vector<string> int_str = {"0","1","2","3","4","5","6","7","8","9"};
    vector<string> str_str = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string input;

    cout << "Enter a digit from 0-9 in numeric script or in word form.\n";
    while(cin >> input)
    {
        string parsed;
        bool flag = false;
        for(int i = 0; i < 10; ++i)
        {
            string current_int_str = int_str[i];
            string current_str_str = str_str[i];
            if((input == current_int_str) && !flag)
            {
                parsed = str_str[i];
                flag = true;
            }
            else if ((input == current_str_str) && !flag)
            {
                parsed = int_str[i];
                flag = true;
            }
            
        }
        if(!flag)
        {
            cout << "Please enter a real digit! \n";        
        }
        else
        {
            cout << parsed << endl;
        }
        cout << "Enter a digit from 0-9 in numeric script or in word form.\n";
    }
    return 0;
}