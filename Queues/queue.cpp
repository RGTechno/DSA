#include <iostream>
#include "queue.h"
using namespace std;

int main()
{

    queue q;

    q.push(4);
    q.push(6);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(5);

    while (!q.empty())
    {
        cout << q.getFront() << " ";
        q.pop();
    }

    return 0;
}