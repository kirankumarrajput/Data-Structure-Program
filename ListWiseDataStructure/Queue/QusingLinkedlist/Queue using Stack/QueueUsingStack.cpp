#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

class Stack
{
    Node *Top = new Node();

public:
    Stack()
    {
        Top = nullptr;
    }
    bool isempty();
    void push(int);
    int pop();
};
bool Stack::isempty()
{
    if (Top == nullptr)
        return 1;
    else
        return -1;
}
void Stack::push(int x)
{
    Node *temp = new Node();
    if (temp == nullptr)
        cout << "\nStack Full";
    else

    {
        if (isempty())
        {
            Top->data = x;
            Top->next = nullptr;
        }
        else
        {
            temp->data = x;
            temp->next = Top;
            Top = temp;
        }
        cout<<"\n pushed element "<<x<<endl;
    }
}
int Stack::pop()
{
    int x = -1;
    if (isempty())
        cout << "\nStack UnderFlow";
    else
    {
        x = Top->data;
        Node *temp;
        temp = Top;
        Top = Top->next;
        delete temp;
    }
    return x;
}

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(1);
    s1.push(2);
    return 0;
}