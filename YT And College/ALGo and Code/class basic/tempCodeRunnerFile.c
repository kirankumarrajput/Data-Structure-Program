#include<stdio.h>
#include<stdlib.h>
#define N 50
void append();
void insert();
void delete();
void display();
int i=-1,array[N],pos,j;
int main()
{
    int num;
    while(1)
    {
        printf("\n\n1.Append \n2.Instert(Any location) \n3.delete(Any Location) \n4.Traverse(Display)  \n5.Exit \n\nEnter Your choice :");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            append();
            break;
        
        case 2:
            insert();
            break;
        
        case 3:
            delete();
            break;
        
        case 4:
            display();
            break;

        case 5:
            exit(0);
            break;
        
        default:
            printf("Entered invalid Choice\n");
            break;
        }
    }
}

void append()
{
i++;
printf("Enter Item :");
scanf("%d",&array[i]);
printf("\n%d is inserted at index %d\n",array[i],i);
}
void insert()
{
    printf("\nEnter position where you want to insert an Element :");
    scanf("%d",&pos);
    if(pos>i)
    {
        printf("Entered  Position is invalid :\n");
    }
    
    else
    {   
        i++;
        for(i=j;j>pos-1;j--)
        array[j]=array[j-1];

        printf("Enter Item :");
        scanf("%d",&array[pos-1]);
        printf("\n%d is inserted at index %d\n",array[pos-1],pos-1);
    } 
}

void delete()
{
    printf("\nEnter position where you want to insert an Element :");
    scanf("%d",&pos);
    if(pos>i)
    {
        printf("Entered  Position is invalid :\n");
    }
    else
    for(j=pos;i>j;j++)
    array[j]=array[j+1];
    i--;
}
void display()
{
    printf("All elements in list :");
    for( j=0; j<=i;j++)
    {
        printf("\n%d",array[j]);
    }
}