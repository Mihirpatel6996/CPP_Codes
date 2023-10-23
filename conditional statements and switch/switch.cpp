// implementing switch to print hello in different languages

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number form 1 -5 to print hello out of 5 different languages\n";
    cout << "1.Spanish\n2.French\n3.German\n4.chinese\n5.japanese\n";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "hola";
        break;

    case 2:
        cout << "Salut";
        break;

    case 3:
        cout << "Guten Tag";
        break;
    case 4:
        cout << "Nei Ho";
        break;
    case 5:
        cout << "Konnichi Ha";
        break;

    default:
        cout << "enter a valid digit";
        break;
    }

    return 0;
}