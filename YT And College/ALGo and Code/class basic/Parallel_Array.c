#include<stdio.h>
// #define N 5
void main()
{
    // int i, pos,n,Roll_no[N],Age[N];
    // double Mobile_no[N];
    // char Name[N][N], Course[N][N];

    // printf("\n Enter The \n Name \tAge \t Roll no \t Course \t Mobile no \n  ");
    // for(i=0; i<N; i++)
    // {
    //     scanf("%c %c %d %c %d",&Name[i],&Age[i],&Roll_no,&Course, &Mobile_no);
    // }
    //         printf("%c %c %d %c %d",Name[i],Age[i],Roll_no,Course, Mobile_no);


        int i, pos,n,Roll_no[]={1001,1002,1003,1004,1005},Age[]={21,17,19,19,20};
        double Mobile_no[]={9876543210,9876543211, 9876543212,9876543213,9876543214};
        char Name[][7]={"Chandni","Pushpa","Julie","Rohit","Ajay"}, Course[][5]={"BCA","BCA","B.COM","CS","BA"};


    // n=sizeof(Roll_no)/sizeof(Roll_no[0]);
    printf("\t\t\tStudent Table");
    for(i=0; i<5; i++)
    {
        printf("\nRoll_no: %d Name : %c Course: %c Age : %c Mobile_no : %d \n",Roll_no[i],Name[i],Course[i],Age[i],Mobile_no[i]);
    }

}