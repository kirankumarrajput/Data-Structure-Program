#include <iostream>
using namespace std;
double e1(double x, double n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = e1(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double e2(double x, double n)
{
    double sum = 1.0;
    for (; n > 0; n--)
        sum = 1 + (x / n) * sum;
    return sum;
}

double e3(double x, double n)
{
    static double sum = 1.0;
    if (n == 0)
        return sum;
    sum = 1 + (x / n) * sum;
    return e3(x, n-1);
}

double e4(double x, double n)
{
    double sum=1;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        sum+=sum;
    }
}

int main()
{
    cout << " Value of e1 :" << e1(2, 3) << endl;
    cout << " Value of e2 :" << e2(2, 3) << endl;
    cout << " Value of e3 :" << e3(2, 3) << endl;
    return 0;
}