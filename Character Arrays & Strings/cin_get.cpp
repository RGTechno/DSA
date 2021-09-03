#include <iostream>
using namespace std;

int main()
{
    char s[1000];

    char temp = cin.get();

    int len = 0;
    while (temp != '\n')
    {
        s[len++] = temp;
        temp = cin.get();
    }

    s[len] = '\0';

    return 0;
}