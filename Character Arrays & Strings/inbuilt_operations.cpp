#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char a[] = "apple";

    char b[100];

    cout << strlen(a) << endl;

    strcpy(b,a);

    cout<<b<<endl;

    cout<<strcmp(a,b)<<endl;  // equals result 0

    char web[]="www.";
    strcpy(a,strcat(web,a));

    cout<<strcmp(a,b)<<endl;

    return 0;
}