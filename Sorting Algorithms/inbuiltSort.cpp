#include <iostream>
#include <algorithm> //to use inbuilt sort
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int a[] = {-12, 2, 3, -4, 7, 10, 19, -3, -1, 2};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n, compare);
    for (int x : a)
    {
        cout << x << " ";
    }

    sort(a, a + n, greater<int>());
    for (int x : a)
    {
        cout << x << " ";
    }

    return 0;
}