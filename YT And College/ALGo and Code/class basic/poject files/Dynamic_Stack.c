#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next; 
}*top;  
int pos=0;
// struct node *top=NULL;

 void push();
 void pop();
 void display();
 void length();
int main()
{
    while(1)
    {
        printf(" \n1.push \n2.pop \n3.Travese \n4.length \n5.exit \nEnter Your Choice :\n");
        scanf("%d",&pos);
        switch(pos)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                length();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter invalid Choice\n");
        }
    } 
    return 0;
}

void push()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element to be pushed :");
    scanf("%d",&temp->info);
    temp->next=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    temp=top;
    printf("Popped : %d",top->info);
    top=top->next;
    temp->next=NULL;
    free(temp);
}
void display()
{
    struct node *temp;
    temp=top;
    printf("Elements are :\n");
    while(temp!=NULL)
    {
        printf("%d-->",temp->info);
        temp=temp->next;
    }

}
void length()
{
    int count=0;
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("length is : %d\n",count);

}
