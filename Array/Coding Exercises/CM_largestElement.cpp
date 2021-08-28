#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int largestElement = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        largestElement = max(largestElement, arr[i]);
    }
    return largestElement;
}

// int main()
// {
//     vector<int> a1 = {-3, 4, 1, 2, 3};
//     vector<int> a2 = {-1, -2, -3, -3, 8};

//     cout << largestElement(a1) << endl;
//     cout << largestElement(a2) << endl;

//     return 0;
// }