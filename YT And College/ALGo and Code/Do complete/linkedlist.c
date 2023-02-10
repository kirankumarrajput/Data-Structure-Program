

#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *link;
    int data;
} * root;
struct node *insert();
struct node *temp, *p;
int pos;

void append();
void display();
void main()
{
    while (1)
    {
        printf("\n 1.Append \n 2.Dispaly \n 3.for exit\n Enter Your Choice ");
        scanf("%d", &pos);
        switch (pos)
        {

        case 1:
            append();
            break;

        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;

        default:
            printf("invalid key\n enter Key between(1-3)");
        }
    }
}

struct node *insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Unable to allocate memory");
        return temp;
    }
    printf("\nEnter data :");
    scanf("%d,&temp->data");
    temp->link = NULL;
    return temp;
}

void append()
{
    insert();
    if (root == NULL)
        root = temp;
    else
    {
        p = root;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}
void display()
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
        printf("List is Empty");
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->link;
    }
}