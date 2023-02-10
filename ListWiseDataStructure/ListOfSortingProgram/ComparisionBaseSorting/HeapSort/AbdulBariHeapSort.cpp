#include <stdio.h>
void Insert(int A[],int n)
{
 int i=n,temp;
 temp=A[i];
 
 while(i>1 && temp>A[i/2])
 {
 A[i]=A[i/2];
 i=i/2;
 }
 A[i]=temp;
}

int Delete(int A[],int n)
{
 int i,j,x,temp,val;
 val=A[1];
 x=A[n];
 A[1]=A[n];
 
 A[n]=val;
 
 i=1;j=i*2;
 
 while(j<n-1)
 {
 if(A[j+1]>A[j])
 j=j+1;
 if(A[i]<A[j])
 {
 temp=A[i];
 A[i]=A[j];
 A[j]=temp;
 i=j;
 j=2*j;
 }
 else
 break;
 }
 return val;
}


void quick_sort(int A[],int n)
{
    int i,j,k,temp;
    for(k=n;k>=2;k--)
    {
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
        temp=A[1];
        i=1;
        j=2;
        if((j+1)<k)  // k==3 means ki remaining node 2 only because 3rd one is sorted and delete from here...
        if(A[j]<A[j+1])
        j++;

        while((j<=(k-1))&&(A[j]>temp)) //
        {
            A[i]=A[j];
            i=j;
            j=2*i;
            if((j+1)<k) // real k==2 when operation on 3
            if(A[j]<A[j+1])
            j++;
            
        }
            A[i]=temp;

    }
}


int main()
{
 int H[]={0,7,12,8,11};
 // 40,25,35,10,5,20,30
 int n=sizeof(H)/sizeof(H[0])-1;
 int i;
 
 for(i=2;i<=n;i++)
 Insert(H,i);
 
//  for(i=n;i>1;i--)
//  {
//  Delete(H,i);
//  }
 
quick_sort(H,n);


 for(i=1;i<=n;i++)
 printf("%d ",H[i]);
 printf("\n");
 return 0;
}