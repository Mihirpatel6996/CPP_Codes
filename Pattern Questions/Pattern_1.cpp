#include <iostream>
using namespace std;

int main()
{

    // * * * *
    // * * * *
    // * * * *    // Rectangle filled Pattern

    int rows, col, i, j;

    cin >> rows >> col;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= col; j++)
        {

            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}
