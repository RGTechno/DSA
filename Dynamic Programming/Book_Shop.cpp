#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(int pages[], int prices[], int n, int x)
{

    int dp[2][x + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            int current = i%2,prev = (i+1)%2;
            int &ans = dp[current][j];
            if (i == 0 or j == 0)
            {
                ans = 0;
            }
            else if (prices[i - 1] <= j)
            {
                ans = max(dp[prev][j], pages[i - 1] + dp[prev][j - prices[i - 1]]);
            }
            else
                ans = dp[prev][j];
        }
    }

    return dp[n%2][x];

    //===================RECURSIVE CODE=============================
    /*
    if (n == 0 or x == 0)
    {
        return 0;
    }

    if (prices[n - 1] <= x)
    {
        return max(solve(pages, prices, n - 1, x), pages[n - 1] + solve(pages, prices, n - 1, x - prices[n - 1]));
    }
    else
        return solve(pages, prices, n - 1, x);
    */
}

int solve()
{

    int n, x;
    cin >> n >> x;

    int pages[n], prices[n];

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }

    return solve(pages, prices, n, x);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}