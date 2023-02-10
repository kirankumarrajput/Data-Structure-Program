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

void Rmerge_sort(int *A, int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        Rmerge_sort(A, lb, mid);
        Rmerge_sort(A, mid + 1, ub);
        mergesort(A, lb, mid, ub);
    }
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

    int A[] = {4, 54,2,6,36,65,7634,32,122,3,12};
    int n = sizeof(A) / sizeof(A[0]);
    Rmerge_sort(A, 0, n);

    for (int val : A)
    {
        cout << val << " ";
    }
}