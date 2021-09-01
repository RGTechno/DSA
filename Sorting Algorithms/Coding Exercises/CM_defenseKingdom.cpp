#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    int n = position.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (position[j].first > position[j + 1].first)
            {
                swap(position[j], position[j + 1]);
            }
        }
    }
    return W - position[0].first;
}