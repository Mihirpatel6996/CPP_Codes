#include <iostream>
using namespace std;

int main()
{

    //       *
    //      **
    //     ***
    //    ****
    //   *****   // half pyramid after 180 degree rotation for n=5

    int n, i, j;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
