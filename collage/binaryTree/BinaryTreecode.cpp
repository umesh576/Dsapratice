#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildTree(int arr[])
{
    idx++;
    Node *root = new Node(arr[idx]);
    if (arr[idx] == -1)
    {
        return NULL;
    }
    root->left = buildTree(arr);
    root->right = buildTree(arr);
    return root;
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    int arr[13] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, 6, -1, -1};
    Node *root = buildTree(arr);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    preOrder(root);
    return 0;
}