#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    string s;

    for (int i = 0; i < chars.size(); i++)
    {
        int count = 1;
        while (i < chars.size() - 1 && chars[i] == chars[i + 1])
        {
            count++;
            i++;
        }
        s+=chars[i];
        if(count>1) s+=to_string(count);
    }

    return s.length();
}