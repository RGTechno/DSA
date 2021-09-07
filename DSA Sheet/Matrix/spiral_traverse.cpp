// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        
        vector<int> arr;
        
        int sr=0,er=r-1,sc=0,ec=c-1;

        while(sr<=er&&sc<=ec){
    
            //Start Row
    
            for(int i=sc;i<=ec;i++){
                arr.push_back(matrix[sr][i]);
                
            }
    
            //End Column
    
            for(int i=sr+1;i<=er;i++){
                arr.push_back(matrix[i][ec]);
              
            }
    
            // End Row
    
            for(int i=ec-1;i>=sc;i--){
                if(sr==er){
                    break;
                }
                arr.push_back(matrix[er][i]);
                
            }
    
            //Start Column
    
            for(int i=er-1;i>=sr+1;i--){
                if(sc==ec){
                    break;
                }
                arr.push_back(matrix[i][sc]);
                
            }
    
            sr++;
            ec--;
            er--;
            sc++;
    
        }
        return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends