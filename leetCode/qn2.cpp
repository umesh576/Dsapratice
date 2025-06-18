#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        prev = next = NULL;
    }
};
class List
{
public:
    Node *head, *tail;
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->next = NULL;
        tail = newNode;
    }
    void display()
    {
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    void revDisplay()
    {
        Node *temp;
        temp = tail;
        do
        {
            cout << temp->value << "->";
        } while (temp != head);
    }
};
int main()
{
    List l;
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.display();

    return 0;
}