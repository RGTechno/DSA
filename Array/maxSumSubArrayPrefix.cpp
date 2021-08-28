#include <iostream>
using namespace std;

// Prefix Sum Approach O(N^2) time

// Uses a array to store sum of current element and previous elements

int prefixMaxSumSubArray(int a[], int n)
{

    int prefix[n] = {0};
    prefix[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            maxSum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
        }
    }
    return maxSum;
}

int main()
{
    int a[] = {-2, 30, 54, 10, 23, 32, -10, 48, -99, 117, 32};
    int n = sizeof(a) / sizeof(int);

    cout << prefixMaxSumSubArray(a,n) << endl;
    return 0;
}