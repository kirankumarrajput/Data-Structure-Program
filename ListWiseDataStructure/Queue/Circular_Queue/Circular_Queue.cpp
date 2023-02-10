#include <iostream>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue() : front{0}, rear{0}, size{10}
    {
        Q = new int[size];
    }

    Queue(int front = 0, int rear = 0, int size = 10)
    {
        this->front = {front};
        this->rear = {rear};
        this->size = {size};
        Q = new int[size];
    }
    void enqueue(int x)
    {
        if ((rear + 1) % size == front)
            cout << "\nQueue is Full ::\n";
        else
        {
            rear = (rear + 1) % size;
            Q[rear] = x;
            cout << "\n"
                 << x << " is added\n";
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
            cout << "\nQueue is empty\n";
        else
        {
            front = (front + 1) % size;
            x = Q[front];
        }
        return x;
    }
    void display()
    {
        if (front == rear)
            cout << "\n[ Empty ]";
        else
        {
            int i = front+1;
            cout << "\n[ ";

            do
            {
                cout<<Q[i]<<" ";
                i=(i+1)%size;
            }while(i!=((rear+1)%size));
            cout << "]\n";

        }
    }
};
int main()
{
    int size, x, ok = 1;
    char option;
    cout << "\nEnter Queue size : ";
    cin>>size;
    Queue *q=new Queue(0,0,size+1);
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

            cout<<q->dequeue();
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