// to check whether a number is prime or not and also using break keyword

#include <iostream>
using namespace std;

int main()
{

    int n, i;
    cin >> n;

    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        cout << "prime" << endl;
    }

    return 0;
}