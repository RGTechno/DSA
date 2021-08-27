#include <iostream>
using namespace std;

void printAllPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << "(" << x << "," << y << "),";
        }
        cout << endl;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 70, 80, 90, 100};

    int n = sizeof(a) / sizeof(int);

    printAllPairs(a, n);

    // Method for for loop to iterate for array values;
    // for (int x : a)
    // {
    //     cout << x; => 102030405060708090100
    // }

    return 0;
}