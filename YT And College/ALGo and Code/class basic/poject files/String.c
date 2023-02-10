#include <stdio.h>
#include <stdlib.h>
#define N 20
char str1[N], str2[N];
int num, count = 0, len1 = 0, len2 = 0, i = 0, j = 0;
void concatenate();
void stringcopy();
void stringlength();
void stringcompare();
void stringreverse();
void main()
{
    printf("Enter First String :");
    gets(str1);
    printf("Enter second String :");
    gets(str2);
    printf("\nEntered First String is %s\nEntered Second String is %s\n", str1, str2);
    while (1)
    {
        printf("\n\n0.Exit\n1.Concatenate of String\n2.Copy of String\n3.Length of String\n4.Compare of String\n5.Reverse of String\nEnter Your Choice :");
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            exit(0);
            break;
        case 1:
            concatenate();
            break;
        case 2:
            stringcopy();
            break;
        case 3:
            stringlength();
            break;
        case 4:
           stringcompare();
            break;

        case 5:
            stringreverse();
            break;
        default:
            printf("Entered Invalid Choice ");
        }
    }
}

void concatenate()
{

    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; ++i, ++j)
    {
        str1[i] = str2[j];
    }
    str1[i] != '\0';
    printf("\nConcatenated String is %s\n", str1);
}

void stringcopy()
{
    for (i = 0; str2[i] != '\0'; ++i)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    printf("First String is %s", str1);
}

void stringlength()
{
    len1 = 0;
    len2 = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    printf("First String length is %d\n", len1);

    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    printf("Second String length is %d\n", len2);
}

void stringcompare()
{

    for (i = 0, (str1[i] != '\0' || str2[i] != '\0'); ++i;)
    {
        if (str1[i] != str2[i])
        {
            printf("String doesn't match\n");
            count = 1;
            break;
        }
    }

    if (count != 1)
    {
        printf("String is Match");
    }
}

void stringreverse()
{
    char temp;
    for (j = 0; str1[j] != '\0'; j++)
        count++;

    for (i = 0; i < count / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[count - 1 - i];
        str1[count - 1 - i] = temp;
    }
    printf("Reversed String is %s", str1);
}

