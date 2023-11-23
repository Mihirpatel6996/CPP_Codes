#include <iostream>
using namespace std;

int main()
{ // for n =45 output -->> 101101

    int n;
    int quotient;

    cin >> n;
    quotient = n / 2;

    while (quotient != 0)
    {

        cout << n - quotient * 2;
        n = quotient;
        quotient = quotient / 2;
    }

    cout << n - quotient * 2;

    return 0;
}