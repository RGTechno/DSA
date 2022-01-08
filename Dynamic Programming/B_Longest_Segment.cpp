#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n;
    cin>>n;

    vector<pair<int,int>> sup;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        pair<int,int> p;

        p.first=x;
        p.second=y;

        sup.push_back(p);
    }

    double maxDist = 0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int XDiff = abs(sup[i].first - sup[j].first);
            int Xsq = XDiff*XDiff;

            int YDiff = abs(sup[i].second - sup[j].second);
            int Ysq = YDiff*YDiff;

            int whSum = Xsq+Ysq;

            // Dist 
            double dist = sqrt(whSum);

            if(dist>maxDist){
                maxDist=dist;
            }

        }
    }

    cout<<fixed<<setprecision(10)<<maxDist<<endl;

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