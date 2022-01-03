/*
author: rahul gandhi (rgtechno)
*/

//Recursive O(2^N)
class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        
        if(sum==0) return true;
        if(N==0) return false;
        
        //start from last
        
        if(arr[N-1]<=sum){
            return isSubsetSum(N-1,arr,sum-arr[N-1]) or isSubsetSum(N-1,arr,sum);
        }
        else return isSubsetSum(N-1,arr,sum);
    }
};


//Memoize O(N*sum)
int dp[101][100001];

class Solution{   
public:

    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        
        if(sum==0) return true;
        if(N==0) return false;
        
        //start from last
        
        if(dp[N][sum]!=-1) return dp[N][sum];
        
        if(arr[N-1]<=sum){
            return dp[N][sum] = isSubsetSum(N-1,arr,sum-arr[N-1]) or isSubsetSum(N-1,arr,sum);
        }
        else return dp[N][sum] = isSubsetSum(N-1,arr,sum);
    }
};


//Iterative O(N*sum)
class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here
        
        bool dp[N+1][sum+1];
        
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    dp[i][j]=false;
                }
                if(j==0){
                    dp[i][j]=true;
                }
            }
        }
        
        //start from 1
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] or dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[N][sum];
        
    }
};
