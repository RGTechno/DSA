#include <iostream>
using namespace std;

// pair approach find and print element between pairs
void printAllSubArrays(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << "(" << a[i] << "," << a[j] << "),";
            for(int k=i;k<=j;k++){
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 70, 80, 90, 100};

    int n = sizeof(a) / sizeof(int);

    printAllSubArrays(a, n);

    return 0;
}