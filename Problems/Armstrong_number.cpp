#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n, temp, sum = 0, last_digit;

    cin >> n;
    temp = n;

    while (n > 0)
    {
        last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n = n / 10;
    }
    cout << sum;
    if (temp == sum)
    {

        cout << "given number is armstrong";
    }
    else
    {
        cout << "given number is not an armstrong ";
    }

    return 0;
}