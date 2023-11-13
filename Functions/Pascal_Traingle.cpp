#include <iostream>
using namespace std;
// using functions to claculate ncr and draw the pattern pascal triangle

//   1
//   1 1
//   1 2 1
//   1 3 3 1
//   1 4 6 4 1         //   pascal triangle for n=5

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

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j <= i; j++)

        {
            int i_C_j = factorial(i) / (factorial(i - j) * factorial(j));
            cout << i_C_j << " ";
        }

        cout << endl;
    }

    return 0;
}