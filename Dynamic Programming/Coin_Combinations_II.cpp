#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007


int maxWays(int coins[],int n,int sum){

    int dp[n+1][sum+1];

    if(sum<0) return 0;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0) dp[i][j]=j==0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j] = (dp[i-1][j]+dp[i][j-coins[i-1]])%mod;
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];    
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
    // cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}