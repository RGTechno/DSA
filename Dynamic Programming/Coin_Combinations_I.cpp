#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int dp[101][1000001];

int maxWays(int coins[],int n,int sum){

    if(sum<0) return 0;
    if(sum==0) return 1;
    if(n==0) return sum==0;

    if(dp[n][sum]!=-1) return dp[n][sum];

    for(int i=n-1;i>=0;i--){
        if(coins[i]<=sum){
            return dp[n][sum]=(maxWays(coins,n,sum-coins[i])+maxWays(coins,n-1,sum))%mod;
        }
    }
    return dp[n][sum]=maxWays(coins,n-1,sum);
}

int solve(){
    int n,x;

    cin>>n>>x;
    
    int coins[n];

    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    return maxWays(coins,n,x);

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    memset(dp,-1,sizeof(dp));
    // cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}