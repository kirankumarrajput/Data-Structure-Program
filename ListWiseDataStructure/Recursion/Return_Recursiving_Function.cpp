#include<iostream>
using namespace std;

//  int x=0; same result as recursion
int RecursionFun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return RecursionFun(n-1)+x;  // returning time firstly execute itself line go to next line
    }
    return 0;
}

int main()
    {
        int n=5;
        int N=RecursionFun(n);
        cout<<"N : "<<N<<endl;
        return 0;
    }