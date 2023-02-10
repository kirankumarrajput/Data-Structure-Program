#include <stdio.h>
#include <stdlib.h>
#define N 40
char str1[N], str2[N];
int num, count = 0, len1 = 0, len2 = 0;
int i = 0, j = 0;
void concatenate();
void strcopy();
void strlength();
void strcompare();
void strreverse();
int substring();
void main()
{
    printf("Enter First String :");
    gets(str1);
    printf("Enter second String :");
    gets(str2);
    printf("\nEntered First String is %s\nEntered Second String is %s\n", str1, str2);
    while (1)
    {
        printf("\n\n0.Exit\n1.Concatenate of String\n2.Copy of String\n3.Length of String\n4.Compare of String\n5.Reverse of String\n6.Substring\nEnter Your Choice :");
        scanf("%d", &num);
        int index = substring();
        if (index == -1)
            printf("Sub String is not Found");
        else
            printf("Substring found at Index %d ", index);
        break;
        switch (num)
        {
        case 0:
            exit(0);
            break;
        case 1:
            concatenate();
            break;
        case 2:
            strcopy();
            break;
        case 3:
            strlength();
            break;
        case 4:
            strcompare();
            break;
        case 5:
            strreverse();
            break;
        case 6:
            int index;
            index=substring();
            if (index == 0)
                printf("Sub String is not Found");
            else
                printf("Substring found at Index %d ", index);
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

void strcopy()
{
    for (i = 0, j = 0; str2[j] != '\0'; ++i, ++j)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("First String is %s", str1);
}

void strlength()
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

void strcompare()
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

void strreverse()
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

// int substring()
// {
//     int k;
//     int ls = len1;
//     int lp = len2;

//     for (i = 0; str1[i] < (ls + lp - 1); i++)
//     {
//         k = i;
//         for (j = 0; j < lp; j++)
//         {
//             if (str1[k] != str2[j])
//             {
//                 break;
//             }
//             k++;
//         }
//         if (j==lp)
//             return (i);
//     }
//     if (i == ls)
//         return (0);
// }


int substring()
{
    int flag,ls = len1, lp = len2;

    for (i = 1; str1[i] <= (ls + lp - 1); i++)
    {
        flag = 1;
        for (j = 0; j < (lp && flag==1); j++)
        {
            if (str1[i] != str2[j+i-1])
            {
                flag=0;
            }
        }
        if (j==lp)
            return (i);
    }
    if (i == ls)
        return (0);
}
