// count number of set bits in a number

/*
n&(n-1) remove last set bit
*/

#include <iostream>
using namespace std;

int count(int n)
{

    int count = 0;

    while (n > 0)
    {
        int last = n & 1;
        count += last;
        n = n >> 1;
    }

    return count;
}

int count_optimised(int n)
{

    int count = 0;

    while (n > 0)
    {

        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{

    int n;
    cin >> n;

    cout << count(n) << endl;
    cout << count_optimised(n);

    return 0;
}