#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "the number is divisible by both 2 and 3";
    }
    else if (n % 3 == 0)
    {
        cout << "the number is only divisible by 3";
    }
    else if (n % 2 == 0)
    {
        cout << "the number is onnly divisible by 2";
    }
    else
    {
        cout << "the number is not divisible by 2 or 3 ";
    }

    return 0;
}