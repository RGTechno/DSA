/*
author: rahul gandhi (rgtechno)
*/

// O(n*sum);

class Solution{

  public:
    vector<int> subsetSum(int arr[],int sum,int n){
        
        vector<int> v;
        
        bool dp[n+1][sum+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    dp[i][j]=false;
                }
                if(j==0) dp[i][j]=true;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    //include exclude
                    dp[i][j] = dp[i-1][j-arr[i-1]] or dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        for(int j=0;j<=sum/2;j++){
	        if(dp[n][j]){
	            v.push_back(j);
	        }
	    }
        
        return v;

    }
    
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int totalSum = 0;
	    for(int i=0;i<n;i++){
	        totalSum+=arr[i];
	    }
	    
	    vector<int> allPossibleSums = subsetSum(arr,totalSum,n);
	    
	    int ans=INT_MAX;
	    
	    for(auto i:allPossibleSums){
	        ans=min(ans,totalSum-(2*i));
	    }
	    
	    return ans;
	} 
};
