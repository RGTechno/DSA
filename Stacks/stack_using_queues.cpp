#include <iostream>
#include "stack_using_queues.h"
using namespace std;

int main()
{

    stack s;

    s.push(5);
    s.push(1);
    s.push(3);
    s.push(10);
    s.push(2);
    s.pop();
    s.push(4);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}