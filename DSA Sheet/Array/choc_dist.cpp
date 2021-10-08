// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        long long minDiff = INT64_MAX;
        
        sort(a.begin(),a.end());
        
        int s=n-m;
        int e=n-1;
        
        while(s>=0){
            
            long long int diff = a[e]-a[s];
            
            minDiff = min(minDiff,diff);
            
            s--;
            e--;
        }
        
        return minDiff;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends