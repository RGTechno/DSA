#include <iostream>
#include "LL.h"
using namespace std;

int main()
{

    List l;

    l.push_front(2);
    l.push_front(1);
    l.push_front(3);
    l.push_front(4);
    l.push_front(0);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    l.push_back(10);
    l.insert(15,9);
    l.insert(11,3);

    Node *head = l.getHead();

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;

    return 0;
}