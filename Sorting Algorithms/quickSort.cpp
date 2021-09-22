#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{
    int i = s - 1;
    int pivot = a[e];

    for (int j = s; j < e; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quicksort(int a[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}

int main()
{

    int a[] = {12, 2, 3, 4, 7, 10, 19, 3, 1, 2};
    int n = sizeof(a) / sizeof(int);

    quicksort(a, 0, n - 1);
    for (auto x : a)
    {
        cout << x << " ";
    }

    return 0;
}