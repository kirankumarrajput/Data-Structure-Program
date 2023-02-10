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

    void enqueue(int);
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
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
        cout<<"\n"<<x<<" added";
    }
}

int Queue::dequeue()
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
void Queue::display()
{
    Node *p;
    p=front;
    cout<<"[ ";

    while(p)
    {
        cout<<p->Data<<" ";
        p=p->next;
    }
    cout<<" ]";

}
int main()
{
    Queue *q = new Queue();
    int  x, ok = 1;
    char option;    
    while (ok)
    {
        cout << "\n\nChoose option : \nA for add(Enqueue)  \nD for delete(Dequeue) \nP for Print All elements \nE for Exit \n\nWRite :: ";
        cin >> option;
        option = toupper(option);
        switch (option)
        {
        case 'A':
            cout << "Enter int (value) :";
            cin >> x;
            q->enqueue(x);
            break;
        case 'D':
            x=q->dequeue();
            if(x!=-1)
            cout<<":: "<<x<<" deleted "<<endl;
            break;

        case 'P':
            q->display();
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