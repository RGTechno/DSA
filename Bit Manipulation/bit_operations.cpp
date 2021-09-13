/*
1. Get ith Bit
2. Clear ith Bit
3. Set ith Bit
4. Update ith Bit
5. Clear last i bits
6. Clear range of bits
*/

#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1 << i);

    return (n & mask) > 0 ? 1 : 0;
}

void clearIthBit(int &n, int i)
{
    int mask = (1 << i);

    n = (n & (~mask));
}

void setIthBit(int &n, int i)
{
    int mask = (1 << i);

    n = n | mask;
}

void updateIthBit(int &n, int i, int v)
{
    clearIthBit(n, i);

    int mask = (1 << i);

    if (v == 1)
    {
        n = n | mask;
    }
}

void clearLastIBits(int &n, int i)
{
    int mask = (-1 << i);

    n = n & mask;
}

void clearRange(int &n, int i, int j)
{
    int a = (-1 << j+1);
    // cout<<a<<endl;
    int b = ~(-1 << i);
    // cout<<b<<endl;
    int mask = a | b;

    n = n & mask;
}

int main()
{

    int n = 13;

    // cout << getIthBit(n, 2) << endl;

    // clearIthBit(n, 2);

    // setIthBit(n, 1);

    // updateIthBit(n, 0, 0);

    // clearLastIBits(n, 3);

    clearRange(n,2,3);
    cout << n;

    return 0;
}