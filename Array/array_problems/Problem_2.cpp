#include <iostream>
using namespace std;

int max_ele(int arr[], int n)
{
    int key = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (key < arr[i])
        {
            key = arr[i];
        }
    }
    return key;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element = max_ele(arr, n);
    cout << "maximum element in the array  is :  \n";
    cout << element;

    return 0;
}
