#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

string hny(int n){

    if(n==1){
        return "2";        
    }

    if((n)&1) return hny((n/2))+"2";
    return hny(n/2)+"0";

}

string solve(){
    int n;
    cin>>n;


    return hny(n);
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