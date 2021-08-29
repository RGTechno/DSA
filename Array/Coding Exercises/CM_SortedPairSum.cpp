#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    int n = arr.size();
    int ans = INT_MAX;
    pair<int, int> ansPair;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (ans > abs(x - sum))
            {
                ans = min(ans, x - sum);
                ansPair = {arr[i], arr[j]};
            }
        }
    }
    return ansPair;
}

int main()
{
    vector<int> a1 = {10, 22, 28, 29, 30, 40};
    vector<int> a2 = {-1, 0, 1, 3};

    pair<int, int> hmm = closestSum(a1, 54);

    cout << hmm.first << " " << hmm.second;

    return 0;
}