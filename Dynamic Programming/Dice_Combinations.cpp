#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int dp[1000001];

int diceComb(int sum)
{

    if (sum < 0)
        return 0;
    if (sum == 0)
        return 1;

    if (dp[sum] != -1)
        return dp[sum];

    return dp[sum] = (diceComb(sum - 1) 
    + diceComb(sum - 2) 
    + diceComb(sum - 3) 
    + diceComb(sum - 4) 
    + diceComb(sum - 5) 
    + diceComb(sum - 6))%mod;
}

int solve()
{

    int sum;
    cin >> sum;

    return diceComb(sum);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    memset(dp, -1, sizeof(dp));
    // cin>>t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}