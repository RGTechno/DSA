#include <bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool done = false;

        for (int j = i; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                done = true;
            }
        }
        if (!done)
            break;
    }
}