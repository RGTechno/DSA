#include <bits/stdc++.h>
using namespace std;

void WavePrint(int m, int n, int arr[][10])
{
    int sr = 0, er = m - 1, sc = 0, ec = n - 1;

    int counter = 0;

    while (sc <= ec)
    {

        if (counter % 2 == 0)
        {
            for (int i = sr; i <= er; i++)
            {
                cout << arr[i][ec] << " ";
            }
        }

        else
        {
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][ec] << " ";
            }
        }

        ec--;
        counter++;
    }
}

int main()
{
    int arr[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int n = 4, m = 4;

    WavePrint(m,n,arr);

    return 0;
}