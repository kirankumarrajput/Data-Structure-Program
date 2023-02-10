#include<stdio.h>
void main()
{
    int Array[10],n=0,i=0,j=0,k=0,item=0;
    printf("Enter the number of An elements of an array : ");
    scanf("%d",&n);
    printf("Enter the Elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }

    printf("Enter The location Where new Item Will be Inserted :");
    scanf("%d",&k);
    printf("Enter the Item to be inserted at [%d] :",k );
    scanf("%d",&item);

    j=n-1;
    for(;j>=k;j--)
    {
        Array[j+1]=Array[j];
    }

    Array[k]=item;
    n++;
    printf("The Resultant Array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",Array[i]);
    }

}