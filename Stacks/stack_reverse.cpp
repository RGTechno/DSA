#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int d)
{
    if (s.empty())
    {
        s.push(d);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s, d);

    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, temp);
}

int main()
{

    stack<int> s;

    s.push(3);
    s.push(31);
    s.push(10);
    s.push(4);
    s.push(2);
    s.push(1);

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}