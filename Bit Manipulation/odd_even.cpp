// n&1 returns the last bit of a number
// if the lastbit of a number is 1 then the no. is odd else its even

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n&1){
        cout<<"Odd"<<endl;
    }
    else cout<<"Even"<<endl;

    return 0;
}