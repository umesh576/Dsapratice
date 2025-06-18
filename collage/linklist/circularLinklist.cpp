#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class List
{
private:
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
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            Node *temp = tail;
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List underflow" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            tail->next = head;
            delete temp;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List underflow" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
            tail->next = head;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        cout << temp->data << "->"; // Print the first node
        temp = temp->next;

        while (temp != head) // Stop when we reach back to head
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "(head)" << endl; // Indicate circularity
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(3);
    ll.push_back(6);
    ll.push_back(7);
    ll.pop_front();
    // ll.pop_front();
    ll.pop_back();
    ll.pop_back();
    ll.display();
    return 0;
}