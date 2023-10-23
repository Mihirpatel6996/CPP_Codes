#include <iostream>
using namespace std;

int main()
{

    char n;
    float n1, n2;

    cout << "enter a symbol";
    cout << "'+' /  '-', '*', '/'\n";
    cin >> n;

    cout << "enter the 2 numbers";
    cin >> n1 >> n2;

    switch (n)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "enter a valid operator";

        break;
    }

    return 0;
}