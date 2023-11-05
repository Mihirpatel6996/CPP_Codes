#include <iostream>
#include <climits>
using namespace std;
int Binarysearch(int arr[], int key, int n)
{

    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        return -1;
    }

    return -1;
}
int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "enter the key to search";
    int key;
    cin >> key;

    int ans = Binarysearch(array, key, n);
    cout << ans;
}