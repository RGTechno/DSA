#include <iostream>
#include <vector>
using namespace std;

// Top Down approach  (either the last gets included or not in the optimal solution)
int knapsack(int n, int w, vector<int> prices, vector<int> weights)
{

    if (n == 0 || w == 0)
    {
        return 0;
    }

    int inc = 0, exc = 0;
    if (w - weights[n - 1] >= 0)
    {
        inc = prices[n - 1] + knapsack(n - 1, w - weights[n - 1], prices, weights);
    }

    exc = 0 + knapsack(n - 1, w, prices, weights);

    return max(inc, exc);
}

// Bottom Up approach
int knapsack_bottom(int n, int w, vector<int> prices, vector<int> weights)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            int inc = 0, exc = 0;
            if (weights[i - 1] <= j)
            {
                inc = prices[i - 1] + dp[i - 1][j - weights[i - 1]];
            }
            exc = dp[i - 1][j];

            dp[i][j] = max(inc, exc);
        }
    }

    return dp[n][w];
}

int main()
{
    int n = 4, w = 11;

    vector<int> prices = {5, 20, 20, 10};
    vector<int> weights = {2, 7, 3, 4};

    // Maximum Total

    cout << knapsack(n, w, prices, weights) << endl;

    cout << knapsack_bottom(n, w, prices, weights);

    return 0;
}