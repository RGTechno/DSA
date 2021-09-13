// find a^b

#include <iostream>
using namespace std;

int expo(int a, int b)
{
    int result = 1;

    while (b > 0)
    {
        if (b & 1)
        {
            result *= a;
        }
        a *= a;
        b = b >> 1;
    }
    return result;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout<<expo(a,b);

    return 0;
}