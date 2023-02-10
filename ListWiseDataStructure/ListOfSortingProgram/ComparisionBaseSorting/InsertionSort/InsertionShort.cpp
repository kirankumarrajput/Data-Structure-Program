#include <iostream>
using namespace std;
void insertionSort(int A[], int n)
{
    int i, j, NewVal;
    // i start from 1 not 0 because one element always itself sorted...
    for (i = 1; i < n; i++) // i sort first 0 and 1,2,3,4,5 like this...
    {
        NewVal = A[i]; // always ith index has new inserted elements..
        j = i - 1;  
        while (j > -1 && A[j] > NewVal)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = NewVal;
    }
}
int main()
{
    int A[] = {35, 635, 656, 767, 8, 325, 78, 235};
    int size = sizeof(A) / sizeof(A[0]);
    insertionSort(A, size);
    cout<<"Insertion sort : [ ";
    for(const int val:A)
    {
        cout<<val<<" ";
    }
    cout<<"]";
}