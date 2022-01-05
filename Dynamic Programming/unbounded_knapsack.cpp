/*
author: rahul gandhi (rgtechno)
*/

// Recursive O(2^N)
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==0 or W==0) return 0;
        
        if(wt[N-1]<=W){
            return max(val[N-1]+knapSack(N,W-wt[N-1],val,wt),knapSack(N-1,W,val,wt));
        }
        return knapSack(N-1,W,val,wt);
    }
};


// Memoize O(N^W)
int dp[1001][1001];

class Solution{
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==0 or W==0) return 0;
        
        if(dp[N][W]!=-1) return dp[N][W];
        
        if(wt[N-1]<=W){
            return dp[N][W] = max(val[N-1]+knapSack(N,W-wt[N-1],val,wt),knapSack(N-1,W,val,wt));
        }
        return dp[N][W] = knapSack(N-1,W,val,wt);
    }
};



// Iterative O(N^W)
int dp[1001][1001];

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        for(int i=0;i<N+1;i++){
            for(int j=0;j<W+1;j++){
                if(i==0 or j==0) dp[i][j]=0;
            }
        }
    
        for(int i=1;i<N+1;i++){
            for(int j=1;j<W+1;j++){
                if(wt[i-1]<=j){
                    dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[N][W];
        
    }
};
