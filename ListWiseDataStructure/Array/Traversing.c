#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the elements You want in array : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter The Elements of Array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Resultant Array is....\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}