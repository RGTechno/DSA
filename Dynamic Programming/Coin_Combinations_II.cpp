#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007


int maxWays(int coins[],int n,int sum){
    
    int dp[2][sum+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            int current = i%2,prev=(i+1)%2;
            int &ans = dp[current][j];

            if(i==0){
                ans=0;
            }
            else if(j==0) ans=1;
            else if(coins[i-1]<=j){
                ans=(dp[prev][j]+dp[current][j-coins[i-1]])%mod;
            }

            else ans=dp[prev][j];
        }
    }

    return dp[n%2][sum];
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