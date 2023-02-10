#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root;
int pos = 0, len = 0, count = 0;
void append();
void addatbegin();
void addanyloc();
void delete ();
int length();
void display();
void swap();
void main()
{

    while (1)
    {
        printf("\n 1.Add at Begin \n 2.Append \n 3.Add (any location) \n 4.Delete \n 5.Dispaly \n 6.Length \n 7 Swap\n 8.Exit \n Enter Your Choice ");
        scanf("%d", &pos);
        switch (pos)
        {
        case 1:
            addatbegin();
            break;
        case 2:
            append();
            break;
        case 3:
            addanyloc();
            break;
        case 4:
            delete ();
            break;
        case 5:
            display();
            break;
        case 6:
            len = length();
            printf("Linked List Length is %d", len);
            break;
        case 7:
            swap();
            break;
        case 8:
            exit(0);
            break;

        default:
            printf("Enter Invalid key");
        }
    }
    free(root);
}
void append()
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    printf(" \n Enter data of node: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        p = root;
        while (p->link != NULL)
        // p->link because it's run after cheking of root=pos
        {
            p = p->link;
        }
        p->link = temp;
    }
}

int length()
{
    struct node *temp;
    temp = root;
    count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void addatbegin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter item :");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        temp->link = root;
        root = temp;
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
void addanyloc()
{
    int i = 1;
    struct node *temp, *p;
    printf("Enter the Postion to be Insert a node :");
    scanf("%d", &pos);
    len = length();
    if (pos > len)
        printf(" Node doesn't Exist in this Position\n");

    else
    {
        p = root;
        while (i < pos - 1)
        {
            p = p->link;
            i++;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter The Node data : ");
        scanf("%d", &temp->data);
        temp->link = p->link;
        p->link = temp;
    }
}

void delete ()
{
    int pos, i = 1;
    struct node *temp, *p, *q;
    printf("Enter the position to delete :");
    scanf("%d", &pos);
    if (pos > length())
        printf("Invalid Postion");
    else if (pos == 1)
    {
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else
    {
        while (i < pos - 1)
        {
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
    }
}

void swap()
{
    int i = 1;
    struct node *p, *q, *r;
    p = root;
    printf("Enter pos to swap :\n");
    scanf("%d", &pos);
    if (root == NULL || length() < pos)
    {
        printf("Entered number is invalid\n");
    }
    else if (pos == i)
    {
        q = p->link;
        r = q->link;

        p->link = r;
        q->link = p;
        root = q;
    }
    else if (pos == length())
    {
        while (i < pos - 2)
        {
            p = p->link;
            i++;
        }
        q = p->link;
        r = q->link;

        q->link = r->link;
        r->link = q;
        p->link = r;
    }

    else
    {
        while (i < pos - 1)
        {
            p = p->link;
            i++;
        }
        q = p->link;
        r = q->link;

        q->link = r->link;
        r->link = q;
        p->link = r;
    }
}