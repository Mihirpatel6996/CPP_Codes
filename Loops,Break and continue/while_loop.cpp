#include <iostream>
using namespace std;

int main()
{
    // program to accept a number till the number is negative
    int n;
    cin >> n;

    while (n > 0)
    {
        cout << n << endl;
        cin >> n;
    }

    return 0;
}