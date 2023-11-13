#include <iostream>
using namespace std;
// using functions to claculate ncr

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

    int n, r;
    cout << "enter n value : ";
    cin >> n;

    cout << "enter r value : ";
    cin >> r;
    // formaual is  n!/ (n-r)! * r!

    int n_C_r = factorial(n) / (factorial(n - r) * factorial(r));
    cout << n_C_r;

    return 0;
}