#include <iostream>
using namespace std;
void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int partitioning(int A[], int lb, int ub)
{
    int i = lb, pivot = A[lb];
    do
    {
        do
        {
            lb++;
        } while (pivot >= A[lb]);
        do
        {
            ub--;
        } while (pivot < A[ub]);
        if (lb < ub)
            Swap(A[lb], A[ub]);
    } while (lb < ub);
    Swap(A[i], A[ub]);

    return ub;
}

void quickSort(int A[], int lb, int ub)
{
    int spliter;
    if (lb < ub)
    {
        spliter = partitioning(A, lb, ub);
        quickSort(A, lb, spliter);
        quickSort(A, spliter + 1, ub);
    }
}

int main()
{
    int A[] = {1, 3, 5, 763, 25, 6, 2, 8, 1, 7,36,56,243};
    int ub = sizeof(A) / sizeof(A[0]);
    quickSort(A, 0, ub);
    cout << "[ ";
    for (int val : A)
        cout << val << " ";
    cout << "]";
}