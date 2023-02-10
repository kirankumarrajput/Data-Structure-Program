#include <iostream>
using namespace std;
struct Node
{
    int Data;
    struct Node *next;
};

class Queue
{
    Node *front = new Node();
    Node *rear = new Node();

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    void RearEnqueue(int);
    int FrontDequeue();

    void FrontEnqueue(int);
    int RearDequeue();
    void display();
};

void Queue::RearEnqueue(int x)
{
    Node *temp = new Node();
    if (temp == nullptr)
        cout << "\nQueue is Empty\n";
    else
    {
        temp->Data = x;
        temp->next = nullptr;
        if (front == nullptr)
            front = rear = temp;
        else
            rear->next = temp;
        rear = temp;
        cout << "\n"
             << x << " added";
    }
}

int Queue::FrontDequeue()
{
    int x = -1;
    Node *temp;
    if (front == nullptr)
        cout << "\nQueue is empty";
    else
    {
        x = front->Data;
        temp = front;
        front = front->next;
        delete temp;
    }
    return x;
}

int Queue::RearDequeue()
{
    int x = -1;
    Node *temp, *p,*save;
    p = front;
    if (front == nullptr)
        cout << "\nQueue is empty";
    else
    {
        x = rear->Data;
        temp = rear;
        while (p!= rear)
        {
            save=p;
            p = p->next;
        }
        rear = save;
        rear->next=nullptr;
        delete temp;
    }
    return x;
}
void Queue::FrontEnqueue(int x)

{
    Node *temp = new Node();
    if (temp == nullptr)
        cout << "\nQueue is Empty\n";
    else
    {
        temp->Data = x;
        temp->next=front;
        front=temp;
        cout << "\n"
             << x << " added";
    }
}
void Queue::display()
{
    Node *p;
    p = front;
    cout << "[ ";

    while (p!=nullptr)
    {
        cout << p->Data << " ";
        p = p->next;
    }
    cout << " ]";
}
int main()
{
    Queue *q = new Queue();
    int x, ok = 1;
    char option;
    while (ok)
    {
        cout << "\n\nChoose option : \nA for add(RearEnqueue) \nF for front EnQueue :  \nD for delete(Dequeue) \nP for Print All elements \nR for RearDequeue : \nE for Exit \n\nWRite :: ";
        cin >> option;
        option = toupper(option);
        switch (option)
        {
        case 'A':
            cout << "Enter int (value) :";
            cin >> x;
            q->RearEnqueue(x);
            break;

        case 'F':
            cout << "Enter int (value) :";
            cin >> x;
            q->FrontEnqueue(x);
            break;
        case 'D':
            x = q->FrontDequeue();
            if (x != -1)
                cout << ":: " << x << " deleted " << endl;
            break;

        case 'P':
            q->display();
            break;

        case 'R':
            x = q->RearDequeue();
            if (x != -1)
                cout << ":: " << x << " deleted " << endl;
            break;
        case 'E':
            ok = 0;
            break;

        default:
            cout << "Please Enter Valid Option\n";
            break;
        }
    }
}