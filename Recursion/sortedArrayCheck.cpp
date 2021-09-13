// Check if array is sorted or not using recursion

#include <iostream>
using namespace std;

int checkSorted(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    if (a[0] < a[1] && checkSorted(a + 1, n - 1))
        return true;
    return false;
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 17, 8};

    int n = sizeof(a) / sizeof(int);

    cout << checkSorted(a, n);

    return 0;
}