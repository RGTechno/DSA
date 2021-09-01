#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    if (flag)
    {
        sort(a.begin(), a.end());
    }
    else
    {
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
    }
    return a;
}

int main()
{

    vector<int> a = {2, 4, 1, 7, 9, 0};

    a = sortingWithComparator(a, 0);
    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}