#include <iostream>
using namespace std;

class Node
{
    int data;
    class Node *left;
    class Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    void inorderTraverse( Node *ptr)
    {
        if (ptr != NULL)
        {
            inorderTraverse(ptr->left);
            cout << ptr->data << " ";
            inorderTraverse(ptr->right);
        }
    }
};

int main()
{
    class Node *Root = new Node(1);
    Root->left = new Node(2);
    Root->right = new Node(3);
    Root->left->left = new Node(5);

    Node.inorderTraverse(Root);
}