//  searching an element in a 2-d array

#include <iostream>
using namespace std;

int main()
{

    int m, n, key;
    cout << "enter array size";
    cin >> m >> n;

    //  2-d array initialization

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }

    cin >> key;
    bool flag = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (arr[i][j] == key)
            {

                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "element found in the array ";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}