#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int currentElement = a[i];
        int prev = i - 1;

        while (prev >= 0 && currentElement < a[prev])
        {
            a[prev + 1] = a[prev];
            a[prev] = currentElement;
            prev--;
        }
    }
}

int main()
{
    int a[] = {-12, 2, 3, -4, 7, 10, 19, -3, -1, 2};
    int n = sizeof(a) / sizeof(int);

    insertionSort(a, n);

    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}