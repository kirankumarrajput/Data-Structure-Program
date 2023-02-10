#ifndef _Queue_H
#define _Queue_H
#include <iostream>

class Node
{
public:
    int data;
    Node *next;
} *front = nullptr, *rear = nullptr;

void enqueue(int x)
{
    Node *t;
    t = new Node();
    if (t == nullptr)
        std::cout << "Queue is Full\n";
    else
    {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr)
            front = rear = t;
        else
            rear->next = t;
        rear = t;
    }
}

int dequeue()
{
    int x = -1;
    Node *t;
    if (front == nullptr)
        std::cout << "Queue is Empty\n";
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

bool isEmpty()
{
    return (front == nullptr);
}

#endif