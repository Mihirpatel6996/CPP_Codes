#include <iostream>
#include <climits>
using namespace std;
int Linearsearch(int arr[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
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

    int ans = Linearsearch(array, key, n);
    cout << ans;
}