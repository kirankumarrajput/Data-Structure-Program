#include <iostream>
using namespace std;
void insert(int A[], int n)
{
    int i = n, temp;
    temp = A[i];
    while (A[i / 2] < temp && 1<i)
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

void Delete(int A[], int n)
{
    int del_val, temp;
    del_val = A[1];
    A[1] = A[n];
    int i = 1;
    int j = 2 * i;
    while (n - 1 > j)
    {
        if (A[j + 1] > A[j])
            j = j + 1;

        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = i * 2;
        }
        else
            break;
    }
    A[n] = del_val;
}

int main()
{
    int A[] = {0, 87, 3, 4, 5, 86, 34, 12, 6, 8};
    for (int i = 2; i <= 9; i++)
        insert(A, i);

    for (int i = 9; i > 1; i--)
        Delete(A, i);

    cout << "[ ";
    for (int i = 1; i <= 9; i++)
        cout << A[i] << " ";
    cout << "]";
}