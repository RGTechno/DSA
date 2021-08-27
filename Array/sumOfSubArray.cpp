#include <iostream>
using namespace std;

// Problem : Print sum of sub arrays and find the largest sum;

int sumOfSubArray(int a[], int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
                sum += a[k];
                maxSum = max(maxSum, sum);
            }
            cout << " => "<<sum;
            cout << endl;
        }
    }
    return maxSum;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 70, 80, 90, 100};

    int n = sizeof(a) / sizeof(int);

    int max = sumOfSubArray(a, n);
    cout << max;

    return 0;
}