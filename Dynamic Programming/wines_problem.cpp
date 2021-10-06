// Wines Problem

/*
Given array of prices of wine bottles in year 1;
1. Each year only one bottle can be sold
2. A bottle can be sold from either left or right of the shelf
3. Every year the price of each bottle is increased as y*pi  (pi-price of ith bottle in year 1,y-year ;1/2/3 etc)
3. Find max profit
*/

/*
Ex: [2,3,5,1,4]
Output - 50
2*1+4*2+1*3+3*4+5*5 = 50
*/

#include <iostream>
#include <vector>
using namespace std;

// Top Down approach
int max_profit(vector<int> p, int year, int l, int r)
{
    if (l > r)
    {
        return 0;
    }

    int dp[10][10] = {0};

    if (dp[l][r] != 0)
    {
        return dp[l][r];
    }

    int pick_left = year * p[l] + max_profit(p, year + 1, l + 1, r);
    int pick_right = year * p[r] + max_profit(p, year + 1, l, r - 1);

    return dp[l][r] = max(pick_left, pick_right);
}

int main()
{
    vector<int> prices = {2, 3, 5, 1, 4};

    int y = 1;

    cout << max_profit(prices, y, 0, prices.size() - 1);

    return 0;
}