#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
{
    int info;
    Node left;
    Node right;
} *start;
Node *temp, *ptr; *save;
int pos,item;
void delete();
int main()
{
    while(1)
    {
        printf("\n1.Append  \n2.addatbegin \n3.delete \n4.addatanywhere \n5.Swap \n6.Exit \nEnter Your Choice :");
        scanf("%d",&pos);
        switch(pos);
        {
            case 1:
                printf("Enter Item :");
                scanf("%d",&item);
                delete(item);
            break;
            case 2:

            break;
            case 3:

            break;
            case 4:

            break;
            case 5:

            break;
            case 6:

            break;
            case 7:

            break;
        }
    }
}

void delete()
{
    temp=(struct node*)malloc(sizeof(struct node));
}