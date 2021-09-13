/*
 Left Shift Operator << 
 a<<b = a*2^b
*/

/*
 Right Shift Operator >>
 a>>b = a/2^b
*/

#include <iostream>
using namespace std;

int leftShift(int a,int b){
    return (a<<b);
}

int rightShift(int a,int b){
    return(a>>b);
}

int main()
{
    int a=10;
    int b=2;

    //Left
    cout<<"left shift "<<leftShift(a,b)<<endl;
    
    //Right
    cout<<"right shift "<<rightShift(a,b)<<endl;

    return 0;
}