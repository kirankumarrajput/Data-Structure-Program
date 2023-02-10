#include <iostream>
using namespace std;

int Max(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }

    return max;
}

void countsort(int A[], int n)
{
    int m = Max(A, n);
    int *newA=new int[m+1]{0};
    // max fun return max value of array A
    // and {0}  assign all array with zero
    for (int i = 0; i < n; i++)
    {
        newA[A[i]]++;
    }

    int i = 0, j = 0;
    while (i < (m + 1))
    {
        if (newA[i] > 0)
        {
            A[j++] = i;
            newA[i]--;
        }
        else
            i++;
    }
}

int main()
{
    int A[] = {56, 35, 234, 213, 45, 64, 25, 1, 6, 24, 46, 2};
    int size = sizeof(A) / sizeof(A[0]);
    countsort(A, size);
    for (const int &val : A)
        cout << val << " ";
}