#include <iostream>
using namespace std;

int main()
{

    //  * * * *     //  Hollow rectangle pattern
    //  *     *
    //  * * * *

    int rows, col, i, j;

    cin >> rows >> col;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= col; j++)
        {

            if (i == 1 || i == rows || j == 1 || j == col)
            {

                cout << "*";
            }
            else
            {

                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

// input 7 5