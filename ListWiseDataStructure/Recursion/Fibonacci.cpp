#include <iostream>
using namespace std;
#define N 20
int F[N];

int rfib(int n)
{
    if(n<=1)
    return n;
    else
    return rfib(n-2)+rfib(n-1);
}

int fib(int n)
{
    int t0=0,t1=1,sum=0;
    for(int i=2;i<=n;i++)
    {
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}

int ffib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = ffib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = ffib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        F[i] = -1;
    }
    cout << ffib(5) << endl;
}