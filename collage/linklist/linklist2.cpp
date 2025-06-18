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
class list
{
private:
    Node *head;
    Node *tail;

public:
    list()
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
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (tail == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            newNode->next = NULL;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "linklist underflow" << endl;
            return;
        }
        else
        {
            Node *temp;

            head = head->next;
            temp->next = NULL;
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
            temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        if (pos < 0)
        {
            cout << "Nothing happen n the linklist" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        else
        {

            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    // search by index
    int search(int dat)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == dat)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.insert(4, 1);
    ll.display();
    cout << "Index is: " << ll.search(4) << endl;

    ll.push_front(4);

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.pop_front();
    ll.pop_front();

    ll.pop_back();
    ll.pop_back();

    ll.display();
    return 0;
}
