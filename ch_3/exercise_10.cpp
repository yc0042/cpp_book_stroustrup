#include "std_lib_facilities.h"

int main()
{
    string op;
    double operand1, operand2;

    cout << "Input an operator (+,-,*,/) and two operands: \n";

    cin >> op >> operand1 >> operand2;
    
    if(op == "+" || op == "plus")
    {
        cout << operand1 + operand2;
    }
    else if(op == "-" || op == "min")
    {
        cout << operand1 - operand2;
    }
    else if(op == "*" || op == "mul")
    {
        cout << operand1 * operand2;
    }
    else if(op == "/" || op == "div")
    {
        cout << operand1 / operand2;
    }
    cout << '\n';
    return 0;
}