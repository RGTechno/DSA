#include <iostream>
using namespace std;

void spiralPrint(int a[][10], int n, int m)
{
    int sr=0,er=n-1,sc=0,ec=m-1;

    while(sr<=er&&sc<=ec){

        //Start Row

        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }

        //End Column

        for(int i=sr+1;i<=er;i++){
            cout<<a[i][ec]<<" ";
        }

        // End Row

        for(int i=ec-1;i>=sc;i--){
            if(sr==er){
                break;
            }
            cout<<a[er][i]<<" ";
        }

        //Start Column

        for(int i=er-1;i>=sr+1;i--){
            if(sc==ec){
                break;
            }
            cout<<a[i][sc]<<" ";
        }

        sr++;
        ec--;
        er--;
        sc++;

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

    spiralPrint(arr,n,m);

    return 0;
}