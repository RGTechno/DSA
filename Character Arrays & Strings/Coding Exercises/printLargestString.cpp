#include <iostream>
#include <cstring>
using namespace std;

// Given multiple strings, print out the string with max length

int main()
{
    char s[1000];
    char largest[1000];

    int n = 3;
    int len = 0;
    while (n--)
    {
        cin.getline(s, 1000);
        int length = strlen(s);
        if (length > len)
        {
            len = length;
            strcpy(largest, s);
        }
    }

    cout<<largest<<endl;

    return 0;
}