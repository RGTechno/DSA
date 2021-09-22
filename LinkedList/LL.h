#include <iostream>
using namespace std;

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
    ~Node()
    {
        cout << "DELETING NODE " << data << endl;
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

    void insert(int d, int pos)
    {

        if (pos == 0)
        {
            push_front(d);
            return;
        }
        Node *temp = head;

        while (pos - 1 > 0)
        {
            temp = temp->next;
            pos--;
        }

        Node *n = new Node(d);

        n->next = temp->next;
        temp->next = n;
    }

    bool search(int d)
    {

        while (head != NULL)
        {
            if (head->data == d)
                return true;
            head = head->next;
        }

        return false;
    }

    bool rec_search(Node *head, int d)
    {
        if (head == NULL)
            return false;

        if (head->data == d)
            return true;
        return rec_search(head->next, d);
    }

    void pop_front()
    {
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void reverse(Node * &head)
    {
        Node *temp = head;
        Node *cs = head;
        Node *prev = NULL;

        while (cs != NULL)
        {
            temp = temp->next;
            cs->next = prev;
            prev = cs;
            cs = temp;
        }

        head= prev;
    }

    ~List()
    {
        cout << "DELETING LIST" << endl;
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};