#include <iostream>
using namespace std;
void Swap(int &x, int &y)
{
    // int temp=x;
    // x=y;
    // y=temp;

    x = x + y;
    y = x - y;
    x = x - y;
}
void bubbleSort(int A[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                Swap(A[j], A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            // cout << "Adaptive Sort" << endl;
            break;
        }
    }
}

int main()
{
    int A[] = {24, 64, 86, 8, 52, 12, 27, 46, 58, 14, 89, 241, 63};
    // int A[] = {24, 64, 86, 224, 355, 466, 5 ,678};
    int size = sizeof(A) / sizeof(A[0]);
    bubbleSort(A, size);
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << "]";
}