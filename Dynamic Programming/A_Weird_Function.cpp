#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int f(int x){
    return ((x*x) + (2*x) + 3);
}

int solve(){
    int t;
    cin>>t;

    return f(f(f(t)+t)+f(f(t)));
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