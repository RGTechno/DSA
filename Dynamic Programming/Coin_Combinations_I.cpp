#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int dp[1000001];

int maxWays(int coins[],int n,int sum){

    if(sum<0) return 0;
    
    int &ans=dp[sum];

    if(sum==0) return 1;

    if(ans!=-1) return ans;

    ans=0;

    for(int i=0;i<n;i++){
        if(coins[i]<=sum){
            ans +=  (maxWays(coins,n,sum-coins[i]));
            ans%=mod;
        }
    }

    return ans;
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