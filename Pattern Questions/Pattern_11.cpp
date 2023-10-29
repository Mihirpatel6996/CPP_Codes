#include <iostream>
using namespace std;

int main()
{

    //      1
    //     1 2
    //    1 2 3     // Number pattern for n=5
    //   1 2 3 4
    //  1 2 3 4 5

    int n, i, j, sum;

    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {

            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}