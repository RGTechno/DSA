#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int a[] = {-12, 2, 3, -4, 7, 10, 19, -3, -1, 2};
    int n = sizeof(a) / sizeof(int);

    bubbleSort(a,n);

    for(int x:a){
        cout<<x<<" ";
    }

    return 0;
}