/*
Given N = 100000001010
M = 10101
i-j replace N's bits with M's bit
*/

#include <iostream>
using namespace std;

void clearRange(int &n, int i, int j)
{
    int a = (-1 << j + 1);
    int b = ~(-1 << i);
    int mask = a | b;

    n = n & mask;
}

void replace(int &n, int m, int i, int j)
{
    clearRange(n, i, j);

    int mask = m << i;

    n = n | mask;
}

int main()
{
    int n, m, i, j;

    cin >> n >> m >> i >> j;

    replace(n, m, i, j);
    cout << n;

    return 0;
}