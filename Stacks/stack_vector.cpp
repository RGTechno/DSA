#include <iostream>
#include "stack_vector.h"
using namespace std;

int main()
{
    stack<int> integerVector;
    // cout << integerVector.length();

    integerVector.push(2);
    integerVector.push(23);
    integerVector.push(12);
    integerVector.push(1);
    integerVector.push(5);

    while (!integerVector.empty())
    {
        cout << integerVector.top() << " ";
        integerVector.pop();
    }

    return 0;
}