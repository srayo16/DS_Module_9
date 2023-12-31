#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }

    void show()
    {
        cout << val << " " << prev << " " << next << endl;
    }
};

void printing(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void tailPrint(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insertAtAny(Node *head, int pos, int val)
{

    Node *temp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->prev = temp->prev;
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    printing(head);
    cout << endl;
    tailPrint(tail);
    return 0;
}