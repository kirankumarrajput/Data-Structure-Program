#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int ncr(int n, int r) // formula ncr=n!/r!(n-r)!
{
    int num, dem;
    num = fact(n);
    dem = fact(r) * fact(n - r);
    return num / dem;
}

int NCR(int n, int r) // by pascal triagle
{
    if(r==0||n==r)
    return 1;
    else
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
    cout << ncr(5, 2) << endl;
    cout << NCR(5, 2) << endl;
}