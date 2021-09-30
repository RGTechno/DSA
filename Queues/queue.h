#include <iostream>
#include <vector>
using namespace std;

class queue
{

    int *a;

    int front, rear;

    int cs = 0;
    int ms = 0;

public:
    queue(int size = 10)
    {
        a = new int[10];
        ms = size;
        front = cs = 0;
        rear = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }

    bool empty()
    {
        return cs == 0;
    }

    void push(int d)
    {
        if (!full())
        {
            rear = (rear + 1) % ms;
            a[rear] = d;
            cs++;
        }
    }

    void pop()
    {
        if (!empty())
        {
            front = (front + 1) % ms;
            cs--;
        }
    }

    int getFront()
    {
        return a[front];
    }
};