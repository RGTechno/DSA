// find the first occurence of element in array

#include <iostream>
using namespace std;

int firstOccurence(int a[], int n, int k)
{
    if (n == 0)
        return -1;
    if (a[0] == k)
    {
        return 0;
    }

    int index = firstOccurence(a + 1, n - 1, k);
    if (index != -1)
    {
        return index + 1;
    }
    return index;
}

int main()
{
    int a[] = {12, 3, 41, 7, 2, 2, 2, 77, 2, 1, 3, 41};

    int n = sizeof(a) / sizeof(int);

    cout << firstOccurence(a, n, 1);

    return 0;
}