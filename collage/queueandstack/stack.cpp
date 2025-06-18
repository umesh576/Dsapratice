#include <iostream>
using namespace std;

class conainer
{
    int arr[5];
    int front = -1, rear = -1;

public:
    void addLast(int x)
    {
        if (rear >= -1)
        {
            cout << "stack Overflow" << endl;
            return;
        }
        arr[++rear] = x;
    }
    void display()
    {
        for (int i = front; i < rear; i++)
        {
            cout << arr[front] << " ";
        }
    }
};

int main()
{

    return 0;
}