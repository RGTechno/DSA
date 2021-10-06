#include <iostream>
#include <vector>
using namespace std;

/* O(2^n)
int fib(int n)
{

    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
*/


// O(n)

// Bottom Up DP => going from smaller subproblem to larger problem by memoisation
int fib(int n)
{
    vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{

    int n;

    cin >> n;

    cout << fib(n) << endl;

    return 0;
}