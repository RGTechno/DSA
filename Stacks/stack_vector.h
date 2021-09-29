#include <iostream>
#include <vector>
using namespace std;

// Implementing Stack using vector

template <typename T>
class stack
{
    vector<T> a;

public:
    int length()
    {
        return a.size();
    }

    bool empty()
    {
        return a.size() == 0;
    }

    void push(T d)
    {
        a.push_back(d);
    }

    void pop()
    {
        a.pop_back();
    }

    T top()
    {
        if (a.size() > 0)
        {
            return a[a.size() - 1];
        }

        return -1;
    }
};
