#include <iostream>
using namespace std;

int main()
{

    //   1
    //   0 1
    //   1 0 1          0-1 pattern for n=5
    //   0 1 0 1
    //   1 0 1 0 1

    int n, i, j, sum;

    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}