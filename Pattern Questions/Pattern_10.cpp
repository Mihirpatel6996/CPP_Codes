#include <iostream>
using namespace std;

int main()
{

    //     *****
    //    *****
    //   *****   //rhombus pattern for n =5
    //  *****
    // *****

    int n, i, j, sum;

    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {

            cout << " ";
        }

        for (j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}