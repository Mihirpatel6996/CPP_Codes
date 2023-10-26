#include <iostream>
using namespace std;

int main()
{

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5  // half pyramid using numbers

    int n, i, j;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}