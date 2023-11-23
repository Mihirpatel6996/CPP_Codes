#include <iostream>
using namespace std;
// sum of first n natural numbers using functions

int sum(int num)
{

    int add = 0;
    for (int i = 1; i <= num; i++)
    {
        add += i;
    }
    return add;
}
int main()
{

    int n;
    cin >> n;

    int ans = sum(n);
    cout << ans;

    return 0;
}