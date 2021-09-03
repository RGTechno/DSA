#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n=str.length();

    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            return false;
        }
    }
    return true;
}