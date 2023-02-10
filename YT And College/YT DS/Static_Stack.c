#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5

void push();
int pop();
void peek();
void traverse();
int isempty();
int isfull();

static int top = -1; //global variable already static not need to declare static
int stack[CAPACITY], num = 0, item = 0, i;
int main()
{
    
    while (1)
    {
        printf("\n1.push\n2.pop\n3.peek\n4.Traverse\n5.Exit\nEnter your choice :");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            push();
            break;
        case 2:
            item=pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Entered key is invalid\n");
        }
    }
    return 0;
}


    int isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isfull()
    {
        if (top == CAPACITY - 1)
            return 1;
        else
            return 0;
    }

    void push()
    {
        if(isfull())
            printf("Stack Overflow\n");
        else{
            printf("Enter the Item : ");
            scanf("%d", &item);
            top++;
            stack[top] = item;
            printf("%d is pushed into Index %d\n",item,top);}
    }

    int pop()
    {
        if (isempty())
            return printf("Stack is Empty");
        else
            return printf("%d index's elements is %d",top, stack[top--]);
            // what am I write for right index number
    }

    void peek()
    {
        if (isempty())
            printf("Stcak is Underflow");
        else
            printf("%d index's elements is %d",top, stack[top]);
    }

    void traverse()
    {
        if (isempty())
            printf("stack is UnderFlow");
        else
        printf("All elements :  \n");
            for (i=top;i>=0;i--)
            {
                printf(" %d\n", stack[i]);
            }
    }