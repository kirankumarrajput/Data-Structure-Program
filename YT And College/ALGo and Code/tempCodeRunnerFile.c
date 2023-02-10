#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

int createlist(int n);
void printlist();
int main()
{
    int n;
    printf("\nEnter the total number of nodes :")
    scanf("%d",&n);
    if(n<=1)
    {
        printf("list is Empty\n");
        return 0;
    }
    else
    {
        createlist(n);
        printf("Elements in List :\n");
        printlist();
        return 0;
    }

}

int createlist(int n)
{
    struct node *temp,*newnode;
    int i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Unable to allocate memory\n");
        exit(0);
    }
printf("Enter the data of node 1:")
scanf("%d",head->data);
head->next=NULL;
temp=head;
for(i=2;i<=n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        prinntf("Unable to allocate memory");
        break;
    }
    printf("Enter the data of node %d:",i);
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp->next=newnode;
    temp=temp->next;
    }
}
void printlist()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is empty.");
        return 0;
    }
    temp=head;
    int i=1;
    while(temp!=NULL)
    {
        printf("Data%d.):%d",i,temp->data);
        temp=temp->next;
    }
}









// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int info;
//     struct node *next;
// } *root;
// int pos=0;

//  void addatbegin();
//  void append();
//  void addatafter();
//  void delete();
//  void display();
//  void length();
// int main()
// {
//     while(1)
//     {
//         printf(" \n 1.For addatbegin \n 2.For append \n 3.For addatafter \n 4.For delete \n 5.For display \n 6.For length  \n 7.For exit \nEnter Your Choice  :");
//         scanf("%d",&pos);
//         switch(pos)
//         {
//             case 1:
//                 addatbegin();
//                 break;
//             case 2:
//                 append();
//                 break;
//             case 3:
//                 addatafter();
//                 break;
//             case 4:
//                 delete();
//                 break;
//             case 5:
//                 display();
//                 break;
//             case 6:
//                 length();
//                 break;
//             case 7:
//                 exit(0);
//                 break;
//             // case 7:
//             // case 7:
//             default:
//                 printf("Enter invalid Choice\n");
//         }
//     } 
//     return 0;
// }

// void addatbegin()
// { 
//     struct node *temp;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the Info: ");
//     scanf("%d",&temp->info);
//     temp->next=NULL;
//     if(temp==NULL)
//     {
//         root=temp;
//     }
//     else
//         temp->next=root;
//         root=temp; 


// }
// void append()
// {

// }
// void addatafter()
// {

// }
// void delete()
// {

// }
// void display()
// {
//     struct node *temp;
//     temp=root;
//     while(temp!=NULL)
//     {
//         printf("");
//     }
    

// }
// void length()
// {
    
// }