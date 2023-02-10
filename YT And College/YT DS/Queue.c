#include<stdio.h>
#include<stdlib.h>
static int i=-1,num=0;
int queue[20];
void Insert();
void delete();
void display();
void main()
{
    while(1)
    {
        printf("\n1.Insert \n2.Delete  \n3.display  \nExit  \nEnter Your choice :");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                Insert();
                break;
            case 2:
                delete();
                break;
            case 3:
               display();
               break;
            case 4:
                exit(0);
            default:
            printf("enter invalid Choice");
        }
    }
}

void Insert()
{
    printf("Enter data to Rear :");
    scanf("%d",&num);
    ++i;
    queue[i]=num;
    printf("\ndata Entered to Rear");
    
}
void delete()
{
    for(int j=0; j<i-1;j++)
    {
        queue[j]=queue[j+1];
    }
    --i;
    printf("\ndeleted data of Front");
}
void display()
{
    printf("All queue elements are :");
    for(int j=0;j<i;j++)
    {
        printf("%d  ",queue[j]);
    }
}