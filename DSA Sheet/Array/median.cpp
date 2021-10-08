// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    
		    sort(v.begin(),v.end());
		    
		    int n = v.size();
		    
		    int e=n-1;
		    
		    if(n%2!=0){
		        int median =  v[e/2];
		        
		        return median;
		    }
		    
		    else {
		        int a=v[e/2];
		        int b = v[(e/2)+1];
		        
		        int median = (a+b)/2;
		        return median;
		    }
		    
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends