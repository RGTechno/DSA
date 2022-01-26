#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int minSteps(int n){

    if(n==0) return 0;

    int max=INT_MIN;

    int k=n;

    while(k){
        int m=k%10;
        if(m>=max){
            max=m;
        }
        k/=10;
    }

    return minSteps(n-max)+1;

}

int solve(){
    int n;
    cin>>n;

    return minSteps(n);    
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