#include <iostream>
using namespace std;

int main()
{
    // printing the sum of first n numbers (n is user input)

    int n, counter, sum = 0;

    cout << "enter the number" << endl;
    cin >> n;

    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }

    cout << "The sum of numbers till " << n << " is " << sum << endl;

    return 0;
}