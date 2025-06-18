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

class CircularList
{
private:
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head; // Circular link
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head; // Maintain circular link
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
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head); // Stop when we reach back to head

        cout << "(head)" << endl; // Indicate circularity
    }
};

int main()
{
    CircularList cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);

    cll.display(); // Expected Output: 3->2->1->(head)

    return 0;
}
