#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left=NULL;
        right=NULL;
    }

    void inorderTraverse(Node &ptr)
    {
        cout<<ptr->left<<" ";
        inorderTraverse(ptr);
        cout<<ptr->right<<" ";
    }
};

int main()
{
    Node *Root =new Node(1);
    Root->left=new Node(2);
    Root->right=new Node(3);
    Root->left->left=new Node(5);

    inorderTraverse(root)
}