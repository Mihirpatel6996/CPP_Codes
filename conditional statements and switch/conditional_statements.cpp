#include <iostream>
using namespace std;

int main()
{

    // maximum of 3 numbers

    int a, b, c;

    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greater" << a << endl;
        }
        else
        {
            cout << "c is greater " << b << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greater " << b << endl;
        }
        else
        {
            cout << "c is greater " << c << endl;
        }
    }

    return 0;
}