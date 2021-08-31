#include <iostream>
#include <vector>
using namespace std;

// O(N+range)  linear time

void countingSort(int a[], int n)
{

    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    int j = 0;
    for (int i = 0; i < largest + 1; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{

    int a[] = {12, 2, 3, 4, 7, 10, 19, 3, 1, 2};
    int n = sizeof(a) / sizeof(int);

    countingSort(a, n);

    for (int x : a)
    {
        cout << x << " ";
    }

    return 0;
}