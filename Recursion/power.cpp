// find a^b;

#include <iostream>
using namespace std;

int power(int a, int b)
{

    if (b == 0)
        return 1;

    return a * power(a, b - 1);
}

int power_optimised(int a, int b)
{
    if (b == 0)
        return 1;

    int a1 = power_optimised(a, b / 2);

    int ans = a1 * a1;

    if (b & 1)
    {
        return a * ans;
    }

    return ans;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
    cout << power_optimised(a, b);

    return 0;
}