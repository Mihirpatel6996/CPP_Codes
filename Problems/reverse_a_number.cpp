#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int reverse = 0, last_digit;

    while (n > 0)
    {
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }

    cout << reverse;

    return 0;
}