/*
author: rahul gandhi (rgtechno)
*/

// Recursive Soln O(2^n)

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 or W==0) return 0;
       
       
       //start from last
       if(wt[n-1]<=W){
           return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       else return knapSack(W,wt,val,n-1);
    }
};

// Memoization O(N*W)

int dp[1001][1001];
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 or W==0) return 0;
       
       if(dp[n][W]!=-1) return dp[n][W];
       
       //start from last
       if(wt[n-1]<=W){
           return dp[n][W] = max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       else return dp[n][W] = knapSack(W,wt,val,n-1);
    }
};


// Iterative O(N*W)

/*
n->i
W->j
*/

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int dp[n+1][W+1];
       for(int i=0;i<n+1;i++){
           for(int j=0;j<W+1;j++){
               if(i==0 or j==0) dp[i][j]=0;
           }
       }
       
       //starting from 1 because 0 row,col are initialization sim to base in recursion
       for(int i=1;i<n+1;i++){
           for(int j=1;j<W+1;j++){
               //start from last
               if(wt[i-1]<=j){
                   dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
               }
               else dp[i][j] = dp[i-1][j];
           }
       }
       
       return dp[n][W];
       
    }
};
