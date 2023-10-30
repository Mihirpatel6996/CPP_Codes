#include <iostream>
using namespace std;

int main()
{
    // to check whether a given number is odd or even

    int a;

    cin >> a;

    if (a % 2 == 0)
    {

        cout << "the given number " << a << " is even" << endl;
    }
    else
    {

        cout << "the given number " << a << " is odd" << endl;
    }

    return 0;
}