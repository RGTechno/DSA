#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{

    if (n == 1)
    {
        return;
    }

    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }

    bubbleSort(a, n - 1);
}

void bubbleSort2(int a[], int n, int j)
{

    if (n == 1 || n == 0)
    {
        return;
    }

    if (j == n - 1)
    {
        bubbleSort2(a, n - 1, 0);
        return;
    }

    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }

    bubbleSort2(a, n, j + 1);
}

int main()
{
    int a[] = {12, 3, 41, 7, 2, 2, 2, 77, 2, 1, 3, 41};

    int n = sizeof(a) / sizeof(int);

    bubbleSort2(a, n, 0);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}