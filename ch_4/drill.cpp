#include "std_lib_facilities.h"

/*drill 1
int main()
{
    int val1, val2;
    while(cin >> val1 >> val2)
    {
        cout << val1 << endl << val2 << endl;
    }
    return 0;
}
*/

/* Drill 2
int main()
{
    int val1, val2;
    while(cin >> val1 >>val2) 
    {
        cout << "The smaller number is " << min(val1, val2) << endl;
        cout << "The larger number is " << max(val1, val2) << endl;
    }
    return 0;
}
*/

/* Drill 3

int main()
{
    int val1, val2;
    while(cin >> val1 >> val2)
    {
        if(val1 == val2)
        {
            cout << "The two numbers are equal \n";
        }
        else
        {
            cout << "The two numbers are NOT equal \n";
        }
    }
    return 0;
}
*/

/* Drill 4
int main()
{
    double val1, val2;
    while(cin >> val1 >> val2)
    {
        if(val1 == val2)
        {
            cout << "The numbers are equal \n";
        }
        else
        {
            cout << "The numbers are NOT equal \n";
        }
    }
    return 0;
}
*/

/* Drill 5
int main()
{
    double val1, val2;
    while(cin >> val1 >> val2)
    {
        if(val1 == val2)
        {
            cout << "The two values are equal" << endl;
        }
        else if(abs(val1 - val2) <= (1.0/100))
        {
            cout << "The larger of the two values is " << max(val1, val2) << endl;
            cout << "The smaller of the two values is " << min(val1, val2) << endl;
            cout << "The two values are almost equal \n";
        }
        else
        {
            cout << "The two values are not equal" << endl;
        }
    }
    return 0;
}
*/

// Drill 6

int main()
{
    double val;
    double max_val, min_val;
    cin >> val;
    max_val = val;
    min_val = val;
    cout << "You entered " << val << ", both the smallest and largest value entered so far." << endl;
    while(cin >> val)
    {
        cout << "You entered " << val << ".";
        if(val == min(val, min_val))
        {
            cout << " The smallest value so far. \n";
        }
        else if (val == max(val, max_val))
        {
            cout << "The largest value so far. \n";
        }
        else
        {
            cout << "\n";
        }
        min_val = min(val, min_val);
        max_val = max(val, max_val);
    }
    return 0;
}