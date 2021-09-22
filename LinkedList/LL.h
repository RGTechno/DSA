#include <iostream>

class Node
{

public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    Node *getHead()
    {
        return head;
    }
    void push_front(int d)
    {
        if (head == NULL)
        {
            Node *n = new Node(d);

            n->next = head;
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }

    void push_back(int d)
    {
        if (head == NULL)
        {
            Node *n = new Node(d);
            n->next = head;
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            tail->next = n;
            n->next = NULL;
            tail = n;
        }
    }
};