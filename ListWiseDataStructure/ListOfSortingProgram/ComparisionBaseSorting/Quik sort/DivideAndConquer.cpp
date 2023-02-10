#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int partition(const int &lb, const int &ub, int arr[])
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
        }

        if (start < end)
            Swap((arr[start]), (arr[end]));
    }
    Swap((arr[lb]), (arr[end]));
    return end;
}
void quicksort(const int &lb, const int &ub, int arr[])
{
    int loc;
    if (lb < ub)
    {
        loc = partition(lb, ub, arr);
        quicksort(lb, loc, arr);
        quicksort(loc + 1, ub, arr);
    }
}

int main()
{
    int arr[] = {1, 2, 99, 24, 65, 76, 243, 999};
    int lb = 0, ub = sizeof(arr) / sizeof(arr[0]);
    quicksort(lb, ub, arr);
    for (int i{}; i < ub; i++)
        cout << arr[i] << " ";
}