// Exercise 7
#include "std_lib_facilities.h"

int parse_string(string input)
{
    vector<string> int_str = {"0","1","2","3","4","5","6","7","8","9"};
    vector<string> str_str = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < 10; ++i)
    {
        string current_int_str = int_str[i];
        string current_str_str = str_str[i];
        if((input == current_int_str))
        {
            return i;
        }
        else if ((input == current_str_str))
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    return -1;
        
}

int main()
{
    string val1, val2;
    char operation;
    //cout << "parse_string(4) is " << parse_string("four") << endl;
    cout << "Input two digits (numeric or word form) and the operation you want applied. \n";

    while(cin >> val1 >> val2 >> operation)
    {   
        int parsed1 = parse_string(val1);
        int parsed2 = parse_string(val2);

        //cout << "parsed values were " << parsed1 << " and " << parsed2 << " with operator " << operation << endl;

        if(operation == '+')
        {
            cout << "The sum of " << parsed1 << " and " << parsed2 << " is " << parsed1 + parsed2 << ".\n";
        }
        else if(operation == '-')
        {
            cout << "The (absolute) difference of " << parsed1 << " and " << parsed2 << " is " << abs(parsed1 - parsed2) << ".\n";
        }
        else if(operation == '*')
        {
            cout << "The product of " << parsed1 << " and " << parsed2 << " is " << parsed1 * parsed2 << ".\n";
        }
        else if(operation == '/')
        {
            cout << "The quotient of " << parsed1 << " and " << parsed2 << " is " << double{parsed1} / double{parsed2} << ".\n";
        }
        cout << "Input two values and the operation you want applied. \n";
    }
    return 0;
}