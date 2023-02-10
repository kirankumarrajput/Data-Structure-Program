#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
} * start;
struct node *save,*ptr;
void append();
void printlist();
int delete(int);
struct node findnodeitem(int,struct *,struct *);
void main()
{
    int n,item,del;
    struct node *next;
    while (1)
    {
        printf("\n1.For Append \n2.For Display \n3.delete a node        \n4.For Exit \nEnter Your choice :");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            append();
            break;
        case 2:
            printlist();
            break;
        case 3:
            printf("Enter the element which you want to delete :");
                scanf("%d",&item);
            delete(item);
            if(ptr==NULL)
            printf("element not present in this list\n");
            else
            printf("Requested element is deleted in this list\n");
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Entered key is invalid");
            break;
        }
    }
    while(start!=NULL)
    {
        next=start->next;
        free(start);
        start=next;
    }

}

void append()
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Unable to allocate memory\n");
        exit(0);
    }
    printf("Enter the info of node :");
    scanf("%d", &temp->info);
    temp->next = NULL;
    
    if (start == NULL)
    {
        start=temp;
    }
    else
    { 
        p=start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;

    }
}
void printlist()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = start;
        printf("Elements of list :\n");
        while (temp != NULL)
        {
            printf("%d--->",temp->info);
            temp = temp->next;
            
        }
    }
}

void delete(int item)
 {
    int findnodeitem(item,save,ptr);
    if(ptr==NULL)
    {
        printf("Item is not present in Linked list\n");
    }
    if(ptr==start)
    {
        printf("%d item is deleted\n",ptr->info);
        start=ptr->next;
        ptr->next=NULL;
        free(ptr);
    }
    else
        printf("%d item is deleted\n",ptr->info);
        save=ptr->next;
        ptr->next=NULL;
        free(ptr);
 }



void findnodeitem(int item,struct node *save,struct node *ptr)
{
    save=NULL; ptr=start;
    if(ptr==NULL)
    {
        save=NULL;
        ptr=NULL;
        return ;
    }
    if(ptr->info==item)
    {
        save=NULL;
        ptr=start;
        return ;

    }
    else
    while(ptr!=NULL)
    {
        save=ptr;
        ptr=ptr->next;
        if(ptr->info==item)
        {
            return ;
        }
    }
    if(ptr->info==NULL)
    {
        ptr=NULL;
        return ;
    }
}

