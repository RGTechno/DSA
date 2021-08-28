#include <iostream>
using namespace std;

// Kadanes Algorithm Linear time
// O(N) time O(1) space
// ignore or exclude sum becoming negative (Basically)

int kadaneAlgo(int a[], int n)
{
    int currentSum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (currentSum < 0)
            currentSum = 0;
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}

int main()
{
    int a[] = {-2, 30, 54, 10, 23, 32, -10, 48, -99, 117, 32};
    int n = sizeof(a) / sizeof(int);

    cout << kadaneAlgo(a, n) << endl;

    return 0;
}