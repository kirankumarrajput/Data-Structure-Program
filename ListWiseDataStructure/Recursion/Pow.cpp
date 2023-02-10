#include <iostream>
using namespace std;

int Pow1(int m, int n)
{
    if (m == 0 || n == 0)
        return 1;
    return Pow1(m,n-1) * m;
}

int Pow2(int m, int n)
{
    if (m == 0 || n == 0)
        return 1;
    if (n % 2 == 0)
        return Pow2( m * m,n / 2);
    else
        return Pow2(m * m,(n - 1) / 2)*m;
}
int main()
{
    int square, n = 2, m = 3;
    square = Pow1( m,n);
    cout << "\n"
         << n << " Power " << m << " : " << square;
}