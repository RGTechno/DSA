#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;  // return index of element found
        }
    }
    return -1;  // returns -1 if element is not found
}

int main()
{
    int a[] = {32, 56, 32, 4, 1, 0, 55, 21};
    int n  = sizeof(a)/sizeof(int);  // returns the size of array `a` 

    int element;
    cin>>element;  // Input the element to be found

    int pos = linearSearch(a,n,element);
    if(pos!=-1){
        cout<<element<<" found at index "<<pos;
    }
    else{
        cout<<element<<" not found!";
    }

    return 0;
}