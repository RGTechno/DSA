#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (a[minIndex] > a[j])
            {
                minIndex = j;
            }
        }
        swap(a[minIndex], a[i]);
    }
}

int main()
{

    int a[] = {-12, 2, 3, -4, 7, 10, 19, -3, -1, 2};
    int n = sizeof(a) / sizeof(int);

    selectionSort(a, n);

    for (int x : a)
    {
        cout << x << " ";
    }

    return 0;
}