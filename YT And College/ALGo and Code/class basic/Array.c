#include<stdio.h>
#include<stdlib.h>
#define N 50
void append();
void insert();
void delete();
void display();
void reverse();
void search(int);

int i=-1,array[N],pos,j;
int main()
{
    int num,item;
    while(1)
    {
        printf("\n\n1.Append \n2.Instert(Any location) \n3.delete(Any Location) \n4.Traverse(Display)  \n5.Reverse \n6.AddressofoneDaarray \n7.Search a Item \n8.Exit \n\nEnter Your choice :");
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
            reverse();
            break;
        case 7:
            printf("\nEnter Item to be Search :");
            scanf("%d",&item);
            search(item);
            break;
        
        case 8:
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
    pos=pos-1;
    if(pos>i)
    {
        printf("Entered  Position is invalid :\n");
    }
    
    else
    {   
        i++;
        for(i=j;j>pos;j--)
        array[j]=array[j-1];

        printf("Enter Item :");
        scanf("%d",&array[pos]);
        printf("\n%d is inserted at index %d\n",array[pos],pos);
    } 
}

void delete()
{
    printf("\nEnter position to detele elements :");
    scanf("%d",&pos);
    pos=pos-1;
    if(pos>i)
    {
        printf("Entered  Position is invalid :\n");
    }
    else
    for(j=pos;j<i;j++)
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

void reverse()
{
    int temp, k=0;
    j=i;
    while (k<j)
    {
        temp=array[k];
        array[k]=array[j];
        array[j]=temp;
        k++;
        j--;
    }
    
}
void search(int item)
{
    for(j=0;j<=i;j++)
    {
        if(array[j]==item)
        {
            printf("%d is found at Location %d",array[j],j+1);
            return;
        }
    }
    if(i<j)
    printf("%d is not found",item);
}
 