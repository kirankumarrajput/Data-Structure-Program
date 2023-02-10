#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    struct node *right;
    int data;
} *root,*temp, *p,*q,*r;
int pos,i;
struct node * insert();
void append();
void addat();
void delete();
void swap();

void main()
{
    int num;
    while(1)
    {
        printf("\n1.Append : \n2.add (any position) : \n3.delete : \n4.swap \n5. Exit \n\nEnter Your choice :");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                append();
                break;
            case 2:
                addat();
                break;
            case 3:
                delete();
                break;
            case 4:
                swap();
                break;
            case 5:
                exit(0);
                break;
            default:
            printf("Entered Invalid Key");
        }
    }
}

struct node* insert()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Unable to allocate memory");
        return temp;
    }
    printf("\nEnter data :");
    scanf("%d,&temp->data");
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

void append()
{
    // insert();
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Unable to allocate memory");
        return ;
    }
    printf("\nEnter data :");
    scanf("%d,&temp->data");
    temp->right=NULL;
    temp->left=NULL;

     if(root==NULL)
     root=temp;
     else
     p=root;
     while(p->right!=NULL)
         p=p->right;
        
        p->right=temp;
        temp->left=p;
}
void addat()
{

}
void delete()
{

}
void swap()
{

}