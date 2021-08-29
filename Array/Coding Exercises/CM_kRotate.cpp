#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    vector<int> ans = a;
    int i = 0;
    while (i < k)
    {
        int n = a.size();
        ans.insert(ans.begin(), a[n - i - 1]);
        ans.pop_back();
        i++;
    }

    return ans;
}

int main()
{

    vector<int> a1 = {1, 3, 5, 7, 9};
    vector<int> a2 = kRotate(a1, 2);

    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2[i] << " ";
    }

    return 0;
}