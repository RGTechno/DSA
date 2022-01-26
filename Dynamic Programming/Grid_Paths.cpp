#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int dp[1001][1001];

int pathWays(vector<vector<char>> &arr,int n,int sr,int sc){

    if(sr<0 or sc<0 or sr==n or sc==n or arr[sr][sc]=='*'){
        return 0;
    }
    if((sr==n-1 and sc==n-1)) return 1;

    if(dp[sr][sc]!=-1) return dp[sr][sc];

    return dp[sr][sc] = (pathWays(arr,n,sr,sc+1)+pathWays(arr,n,sr+1,sc))%mod;
}

int solve(){
    int n;
    cin>>n;

    vector<vector<char>> arr(n,vector<char>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    return pathWays(arr,n,0,0);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}