#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int minCoins(int coins[],int n,int sum){

    int dp[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0) dp[i][j]=0;
            if(i==0) dp[i][j]=INT_MAX-1;

            if(i==1 and j>0){
                if(j%coins[0]==0) dp[i][j]=j/coins[0];
                else dp[i][j] = INT_MAX-1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j] = min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum]>=INT_MAX-1?-1:dp[n][sum];
}

int solve(){
    int n,x;
    cin>>n;
    cout<<n<<" ";
    cin>>x;
    cout<<x<<endl;
    cout<<"----"<<endl;


    cout<<x<<endl;

    int coins[n];

    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    return minCoins(coins,n,x);
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