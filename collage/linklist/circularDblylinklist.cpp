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
    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            Node *temp = head;

            head = newNode;
            head->next = head;
            head->prev = head;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List underflow" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                cout << temp->next << "->";
                temp = temp->next;
                /* code */
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    List l;
    l.push_front(2);

    l.display();
    // List l.
    return 0;
}