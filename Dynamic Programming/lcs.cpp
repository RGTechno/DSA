// Longest Common Subsequence

// Find the length of longest subsequence such that all the
// elements in subsequence are sorted.

#include <iostream>
#include <vector>
using namespace std;

int lcs(vector<int> a)
{
    int n = a.size();

    vector<int> dp(n, 1);

    int max_len = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                max_len = max(max_len, dp[i]);
            }
        }
        cout << dp[i] << " ";
    }

    return max_len;
}

int main()
{

    vector<int> a = {50, 4, 10, 8, 30, 100};

    cout << lcs(a);

    return 0;
}
