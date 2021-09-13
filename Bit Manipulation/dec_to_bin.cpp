// Convert decimal number to its binary form

#include <iostream>
using namespace std;

int dec_to_bin(int n){
    int power=1;
    int ans=0;

    while(n>0){
        int last=n&1;
        ans+=last*power;
        power=power*10;
        n=n>>1;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout<<dec_to_bin(n);

    return 0;
}