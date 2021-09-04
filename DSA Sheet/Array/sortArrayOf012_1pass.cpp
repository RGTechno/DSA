// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int s=0,k=0,e=n-1;
    
        while(k<=e){
            switch(a[k]){
                case 2:
                  swap(a[k],a[e]);
                  e--;
                  break;
                case 1:
                  k++;
                  break;
                case 0:
                  swap(a[k],a[s]);
                  s++;
                  k++;
                  break;
            }
        }
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends