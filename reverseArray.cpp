#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}

int main()
{
    int a[] = {10,20,30,40,50,70,80,90,100};

    int n = sizeof(a) / sizeof(int);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    reverseArray(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}