#include <iostream>
using namespace std;

int main()
{

    //  1
    //  2 3
    //  4 5 6
    //  7 8 9 10
    //  11 12 13 14 15  // Floyd's triangle for n=5

    int n, i, j, count = 1;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            cout << count << " ";
            count = count + 1;
        }

        cout << endl;
    }

    return 0;
}