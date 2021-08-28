#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{

    int maxSum = A[0];

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i; j < A.size(); j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += A[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// int main()
// {

//     vector<int> a = {5, 0, -1, 0, 1, 2, -1};

//     cout << maxSumSubarray(a) << endl;

//     return 0;
// }