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
