#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int Kgreatest(int arr[],int i,int n,int k){

    sort(arr,arr+i);

    return arr[n-k-i+1];

}

void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=k;i<=n;i++){
        cout<<Kgreatest(arr,i,n,k)<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}