#include <stdio.h>
#define N 20
int main()
{
    int i, mid, lb, ub, item, capicity, array[N];
    printf("\nHow many elements you Want to insert Enter the Number :");
    scanf("%d", &capicity);
    printf("Enter Elements \n");
    for (i = 0; i < capicity; i++)
        scanf("%d", &array[i]);

    printf("which Element you want to search :");
    scanf("%d", &item);
    lb = 0;
    ub = capicity - 1; 
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (item == array[mid])
        {
            printf("%d is placed at %d index", array[mid], mid);
            return 0;
        }
        else if (item < array[mid])
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    if (lb > ub)
    {
        printf("%d  is not present in list ", item);
    }
}