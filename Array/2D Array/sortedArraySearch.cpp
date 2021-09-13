/* Given a 2d array fully sorted 1 2 3
                                 4 5 6 */
// Search for an element in optimal solution

#include <iostream>
using namespace std;

void takeInput(int a[][100], int n, int m)
{
    cout<<"Enter ele"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
void print(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int search(int a[][100], int n, int m, int k)
{
    int i = 0, j = m - 1;

    int temp = a[i][j];
    while (i < n && j >= 0)
    {
        if (temp == k)
        {
            // cout << "Found at " << i << " " << j;
            return 0;
        }
        else if (temp > k)
        {
            temp = a[i][--j];
        }
        else
        {
            temp = a[++i][j];
        }
    }
    return -1;
}

int main()
{
    int n, m;
    cout<<"Enter rows and cols"<<endl;
    cin >> n >> m;

    int a[100][100];

    takeInput(a, n, m);
    int k;
    cout<<"Enter Key"<<endl;
    cin >> k;
    print(a,n,m);
    int index = search(a, n, m, k);

    if (index != -1)
    {
        cout << "Found";
    }
    else
        cout << "Not Found";

    return 0;
}