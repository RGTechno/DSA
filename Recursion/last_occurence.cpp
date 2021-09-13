// find last occurence of a number in array

#include <iostream>
using namespace std;

int lastOccurence(int a[],int n,int k){
    if(n==0) return -1;

    int index=lastOccurence(a+1,n-1,k);

    if(a[0]==k && index<=0){
        return 0;
    }

    if(index!=-1){
        return index+1;
    }

    return index;
}

int main()
{
    int a[] = {12, 3, 41, 7, 2, 2, 2, 77, 2, 1, 3, 41};

    int n = sizeof(a) / sizeof(int);

    cout<<lastOccurence(a,n,42);

    return 0;
}