#include <iostream>

using namespace std;

// using fund=ctions to print the factorial of a given number n

int factorial(int num)
{

    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {

        factorial *= i;
    }

    return factorial;
}

int main()
{

    int n;
    cin >> n;

    int fact = factorial(n);
    cout << fact;

    return 0;
}