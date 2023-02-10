#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int temp=x;  // Its suitable for all
    x=y;
    y=temp;

    // x = x + y; // it's receive same address [ x ,y reference same address] so already sorted element made ZERO by it's approach....
    // y = x - y;
    // x = x - y;
}
void insertionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        Swap(A[i], A[k]);
    }
}
int main()
{
    int A[] = {6, 8, 22};
    int size = sizeof(A) / sizeof(A[0]);
    insertionSort(A, size);
    cout << "Insertion sort : [ ";
    for (const int val : A)
    {
        cout << val << " ";
    }
    cout << "]";
}