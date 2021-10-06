/* Given an array of denominations of coins 
and an number to make a change using 
the denominations. Find minimum no. of coins
in which we can make the change*/

// Ex.  [1,3,7,10] denominations
// M=15(change)
// minimum coins = 3 (7,7,1)

#include <iostream>
#include <vector>
using namespace std;

int coinChange(vector<int> a, int m)
{

    vector<int> dp(m + 1, 0);

    dp[0] = 0;

    for (int i = 1; i <= m; i++)
    {
        dp[i] = INT_MAX;

        for (int c : a)
        {
            if (i - c >= 0 && dp[i-c] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }

    return dp[m] == INT_MAX ? -1 : dp[m];
}

int main()
{

    vector<int> a = {1, 5, 7, 10};

    int m = 16;

    cout << coinChange(a, m);

    return 0;
}