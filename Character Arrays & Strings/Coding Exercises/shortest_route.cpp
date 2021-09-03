#include <iostream>
using namespace std;

// Given a route of direction SNNNEWE output the shortest path to travel NNE(in this case)

int main()
{
    char route[1000];

    cin.getline(route, 1000);

    int x = 0, y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
    
            default:
                break;
        }
    }

    if(x>=0&&y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if(x>=0&&y<=0){
        while(y--){
            cout<<"S";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if(x<=0&&y<=0){
        while(y--){
            cout<<"S";
        }
        while(x--){
            cout<<"W";
        }
    }
    else if(x<=0&&y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"W";
        }
    }

    // cout<<x<<","<<y<<endl;

    return 0;
}