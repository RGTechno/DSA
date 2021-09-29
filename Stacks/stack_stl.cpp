#include <iostream>
#include <stack>
using namespace std;

// Stack STL

int main()
{

    stack<char> s;

    s.push('a');
    s.push('b');
    s.push('w');
    s.push('f');
    s.push('c');

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}