#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the coefficients a, b, and c for a quadratic in standard form: \n";
    double a, b, c;
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if(D > 0)
    {
        double x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        double x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        cout << "The roots are x = " << x2 << ", " << x1 << endl;
    }
    else if(D == 0)
    {
        cout << "The sole root/vertex is at " << -1*b/(2*a) << endl;
    }
    else
    {
        cout << "There are no real roots to the given quadratic." << endl;
    }
    return 0;
}