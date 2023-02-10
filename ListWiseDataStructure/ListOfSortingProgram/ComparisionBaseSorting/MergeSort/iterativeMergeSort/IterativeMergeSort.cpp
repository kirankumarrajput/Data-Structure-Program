#include <iostream>
using namespace std;
void mergesort(int *A, int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb, B[100];

    while (i <= mid && j <= ub)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= ub; j++)
        B[k++] = A[j];

    for (int i = lb; i <= ub; i++)
        A[i] = B[i];
}

void Imerge_sort(int *A, int n)
{
    int p, i, lb, mid, ub;
    for (p = 2; p <= n; p * 2) // 2 element sort then 4 then 8 and so on
    {
        for (i = 0; (i + p - 1) < n; i = i + p)
        {
            lb = i;
            ub = i + p - 1; 
            mid = (lb + ub) / 2;
            mergesort(A, lb, mid, ub);
        }
    }

    if ((p / 2) < n)
        mergesort(A, 0, (p / 2) - 1, n);
}

int main()
{
    /*
    int B[] = {0, 6, 7, 8, 1, 2, 3,4};
    mergesort(B, 0, 3, 7);
    for (int val : B)
    {
        cout << val << " ";
    } */

    int A[] = {4, 54};
    int n = sizeof(A);
    cout << n;
    Imerge_sort(A, n);

    for (int val : A)
    {
        cout << val << " ";
    }
}