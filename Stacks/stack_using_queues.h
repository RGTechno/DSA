#include <iostream>
#include <queue>
using namespace std;

class stack
{
    queue<int> q1, q2;

public:
    void push(int d)
    {
        if (q1.empty())
        {
            q1.push(d);
            while (!q2.empty())
            {
                int temp = q2.front();
                q1.push(temp);
                q2.pop();
            }
        }
        else
        {
            q2.push(d);
            while (!q1.empty())
            {
                int temp = q1.front();
                q2.push(temp);
                q1.pop();
            }
        }
    }

    void pop()
    {
        if (!q1.empty())
        {
            q1.pop();
        }
        else if (!q2.empty())
        {
            q2.pop();
        }
    }

    int top()
    {
        return q1.empty() ? q2.front() : q1.front();
    }

    bool empty()
    {
        return q1.empty() and q2.empty();
    }
};