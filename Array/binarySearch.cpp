#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 5, 10, 19, 21, 30, 45};

    int n = sizeof(a) / sizeof(int);

    int k;
    cin>>k;

    int index = binarySearch(a,n,k);

    if(index!=-1) cout<<"Found at "<<index;
    else cout<<"Not Found!!";

    return 0;
}