// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool binarySearch(int a[],int n,int k,int s){
        int e=n-1;
    
        while(s<=e){
            int m = (s+e)/2;
        
            if(a[m]==k){
                return true;
            }
            else if(a[m]>k) e=m-1;
            else s=m+1;
        }
        return false;
    }
    
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                int a = A[i]+A[j];
                
                int k = X-a;
                
                bool found = binarySearch(A,n,k,j+1);
                
                if(found) return true;
            }
        }
    
        
    
        return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends