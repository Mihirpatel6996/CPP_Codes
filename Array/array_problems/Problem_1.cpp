#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max_no = INT_MIN, min_no = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max_no)
        {
            max_no = array[i];
        }

        if (array[i] < min_no)
        {
            min_no = array[i];
        }
    }

    cout << "maximum element in the array is " << max_no << "\n";
    cout << "minimum element in the array is " << min_no;

    return 0;
}