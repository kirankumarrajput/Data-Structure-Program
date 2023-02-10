#include<stdio.h>
#include<stdlib.h>
#define N 5

int q[N];
int fornt,rear,pos;
void add();
void delete();
void main()
{
 while(1)
 {
     printf("\n1.Insert Elements \n2.Delete Elements \n3.exit \nEnter your Choice :");
     scanf("%d",&pos);
     switch(pos)
     {
         case 1:
         add() ;
         break;

         case 2:
         delete();
         break;

         case 3:
         exit(0);
         break;
         default:
         printf("Enter invaild choice");
     }
 }
}

void add()
{

}

void delete()
{

}
