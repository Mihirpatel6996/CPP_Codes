#include <iostream>
using namespace std;

int main()
{

    // initialization and declaration of array

    int array[5] = {1, 2, 3, 4, 5};

    // taking array input from user

    int n;
    cin >> n;

    int array_2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array_2[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << array_2[i] << " ";
    }

    return 0;
}