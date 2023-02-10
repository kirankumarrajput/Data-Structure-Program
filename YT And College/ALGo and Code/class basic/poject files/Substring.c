#include <stdio.h>
#include <string.h>
#define N 50
void main()
{
    char string[N], pattern[N];
    // char string[] = "india is great", pattern[] = "ind";
    printf("Enter Main String :");
    gets(string);
    printf("Enter Pattern String :");
    gets(pattern);
    int LS, LP, i, j, max,k;
    LS = strlen(string);
    LP = strlen(pattern);
    max = LS - LP + 1;

    for (i = 0; i <max; i++)
    {
        k = i;
        for (j = 0; j <LP; j++)
        {
            if (string[k] != pattern[j])
            {
               break;
            }
            k++;
        }
        if (j==LP)

        {
            printf("Sub_String found at %d Position", i+1);
            break;
        }
    }
    if (i==max)
    {   
        printf("Sub-String doesn't found");
    } 
}