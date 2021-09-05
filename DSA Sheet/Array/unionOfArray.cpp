// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    
    int next(int arr[],int size,int index){
        
        int j=index;   //  3 3 3 3 4
        while(j<size and arr[j]==arr[index]){
            j++;
        }
        return j;
    }
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int ans=0;
        sort(a,a+n);
        sort(b,b+m);
        
        int s1=0,e1=n-1;
        int s2=0,e2=m-1;
        
        while(s1<=e1 or s2<=e2){
            if(s1>e1){
                
                s2 = next(b,m,s2);
            }
            else if(s2>e2){
                
                s1=next(a,n,s1);
            }
            else if(a[s1]>b[s2]){
                
                s2=next(b,m,s2);
            }
            else if(a[s1]<b[s2]){
                
                s1=next(a,n,s1);
            }
            else if(a[s1]==b[s2]) {
               
                s1=next(a,n,s1);
                s2=next(b,m,s2);
            }
            ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends