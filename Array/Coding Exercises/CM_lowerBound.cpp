#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int n = A.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] <= Val)
            return A[i];
    }

    return -1;
}

int main()
{
    vector<int> a1 = {-1, -1, 2, 3, 5};
    vector<int> a2 = {-1, 0, 1, 3};

    cout << lowerBound(a1, 4) << endl;
    cout << lowerBound(a2, 0) << endl;

    return 0;
}