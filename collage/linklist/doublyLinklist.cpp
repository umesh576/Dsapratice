#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linklist underflow" << endl;
            return;
        }
        else
        {
            Node *temp;
            temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linklist underflow" << endl;
            return;
        }
        else
        {
            Node *temp;
            temp = tail;
            tail = tail->prev;
            if (tail != NULL)
            {
                tail->next = NULL;
            }
            temp->prev = NULL;
            delete temp;
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "LinkList underflow" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};
int main()
{
    List l;
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_back(6);
    l.pop_front();
    l.pop_back();
    // l.pop_front();
    l.display();

    return 0;
}