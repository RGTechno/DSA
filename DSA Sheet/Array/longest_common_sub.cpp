// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      
      // COUNT SORT O(n)
      
      int maxEle = 0;
      
      for(int i=0;i<n;i++){
          maxEle = max(maxEle,arr[i]);
      }
      
      int freq[maxEle+1]={0};
      
      for(int i=0;i<n;i++){
          freq[arr[i]]+=1;
      }
      
      int ans = 0;
      int len = 1;
      for(int i=0;i<maxEle;i++){
          if(freq[i]>0 and freq[i+1]>0){
              len++;
          }
          else{
              len=1;
          }
          ans = max(len,ans);
        
      }
      return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends