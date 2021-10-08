// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


bool isPalindrome(int n){
    
    int rev=0;
    int temp = n;
    while(temp>0){
        int k = temp%10;
        rev = k+rev*10;
        temp=temp/10;
    }
    
    return rev==n;
}

/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.

    for(int i=0;i<n;i++){
        if(isPalindrome(a[i])==0){
            return 0;
        }
    }
    
    return 1;
}