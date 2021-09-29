#include <iostream>

// Implementing Stack using Linked List

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

class Stack
{

    Node *head;
    Node *tail;

public:
    Stack()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int d)
    {

        if (head == NULL)
        {
            Node *n = new Node(d);
            head = tail = n;
        }

        else
        {
            Node *n = new Node(d);

            n->next = head;
            head = n;
        }
    }

    void pop()
    {
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;

            temp->next = NULL;
            delete temp;
        }
    }

    Node *getHead()
    {
        return head;
    }

    int top()
    {
        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }
};