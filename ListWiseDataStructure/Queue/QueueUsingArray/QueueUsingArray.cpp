#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int front;
    int rear;
    int *Q;

    void create(int size)
    {
        this->size = size;
        front = rear = -1;
        Q = new int[this->size];
    }
    void enqueue(int x)
    {

        if (rear == size - 1)
            cout << "\nQueue is full\n";
        else
        {
            rear++;
            Q[rear] = x;
            cout << x << " added in Queue\n";
        }
    }
    int dequeue()
    {
        int x=-1;

        if (front == rear)
            cout << "\nQueue is empty";
        else
        {
            front++;
            x=Q[front];
           
        }

        // if (front+1 == rear || front==-1 && rear==-1)
        //     cout << "\nQueue is empty";
        // else
        // {
        //     int data=front;
        //     front++;
        //     return data;
        // }
        return x;
    }
    void display()
    {
        if (front == rear)
            cout << "Queue is empty\n";
        else
        {
            cout << " Queue :: [ ";
            for (int i = front + 1; i <= rear; i++)
                cout << Q[i] << " ";
            cout << "]";
        }
    }
};
int main()
{
    Queue *q = new Queue();
    int size, x, ok = 1;
    char option;
    cout << "\nEnter Queue size : ";
    cin >> size;
    q->create(size);
    while (ok)
    {
        cout << "\n\nChoose option : \nA for add(Enqueue)  \nD for delete(Dequeue) \nP for Print All elements \nE for Exit \n\n WRite :: ";
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