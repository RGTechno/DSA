#include <iostream>
#include "stackLL.h"
using namespace std;

int main()
{

    Stack s;

    s.push(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // s.pop();

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}