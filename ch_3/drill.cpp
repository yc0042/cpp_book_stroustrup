#include "std_lib_facilities.h"

int main()
{
    string first_name;
    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    string friend_name;
    cout << "Enter the name of a friend: ";
    cin >> friend_name;
    cout <<"\n Enter the gender of your friend (m/f): \n";
    char friend_sex;
    cin >> friend_sex;
    string message = "Dear " + first_name + "\n\t What's up? How've you been? ";
    
    if(friend_sex == 'm')
    {
        message = message + "Have you seen " + friend_name + " around lately? If you see " + friend_name + " please ask him to call me. :)\n";
    }
    else
    {
        message = message + "Have you seen " + friend_name + " around lately? If you see " + friend_name + " please ask her to call me. :)\n";
    }

    int age;
    cout << "Enter the recipient's age: \n";
    cin >> age;
    message = message + "I hear you just had a birthday and you are " + to_string(age) + " years old. ";
    if(age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }
    else if (age < 12)
    {
        message = message + "Next year you will be " + to_string(age+1) + '\n';
    }
    else if (age == 17)
    {
        message += "Next year you will be able to vote! \n";
    }
    else if (age >= 70)
    {
        message += "I hope you are enjoying retirement. \n";
    }
    else
    {
        message += '\n';
    }
    cout << message;
    return 0;

    return 0;
}