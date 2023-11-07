#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    //  2-d array initialization

    int arr[m][n];

    //  taking user input for 2 d array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }

    //  printing a user input 2-d array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j];
        }
    }

    return 0;
}