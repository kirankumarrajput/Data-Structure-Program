#include <iostream>
using namespace std;
int binarysearch(int A[], int lb, int ub, int item)
{
    int mid;
    while (ub >= lb)
    {
        mid = (lb + ub) / 2;

        if (item == A[mid])
        {
           return mid;
        }
        else if (item > A[mid])
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return mid;
}

int main()
{
    int k, A[] = {1, 3, 5, 6, 7, 8, 9, 23, 25, 45};
    int lb = sizeof(A[0]);
    int ub = sizeof(A) / sizeof(A[0]);
    k=binarysearch(A, lb, ub, 23);
    cout<<A[k];
}