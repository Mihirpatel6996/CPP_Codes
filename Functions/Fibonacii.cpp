#include <iostream>
using namespace std;
// using functions to print fibonacii numbers upto a given range n
void fibonacii(int num)
{
    int nextfib;
    int fib1 = 0;
    int fib2 = 1;

    for (int i = 1; i <= num; i++)
    {
        cout << fib1 << endl;

        nextfib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextfib;
    }

    return;
}

int main()
{

    int n;

    cin >> n;

    fibonacii(n);

    return 0;
}