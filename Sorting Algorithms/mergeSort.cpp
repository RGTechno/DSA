#include <iostream>
#include <vector>
using namespace std;

void merger(int a[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s, j = mid+1;

    vector<int> temp;

    while (i <= mid && j <= e)
    {
        if (a[i] > a[j])
        {
            temp.push_back(a[j]);
            j++;
        }
        else
        {
            temp.push_back(a[i]);
            i++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(a[j]);
        j++;
    }

    int k = 0;
    for (int i = s; i <= e; i++)
    {
        a[i] = temp[k++];
    }
    return;
}

void mergeSort(int a[], int s, int e)
{
    int mid = (s + e) / 2;

    if (s >= e)
    {
        return;
    }

    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);
    return merger(a, s, e);
}

int main()
{

    int a[] = {12, 2, 3, 4, 7, 10, 19, 3, 1, 2};
    int n = sizeof(a) / sizeof(int);

    mergeSort(a, 0, n - 1);

    for (auto x : a)
    {
        cout << x << " ";
    }

    return 0;
}