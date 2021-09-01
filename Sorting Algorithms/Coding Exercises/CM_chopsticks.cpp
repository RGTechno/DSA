#include <bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    int n = length.size();

    sort(length.begin(), length.end());

    int i = 1, count = 0;
    while (i < n)
    {
        if (length[i] - length[i-1] <= D)
        {
            count++;
            i+=2;
        }
        else i++;
    }
    return count;
}