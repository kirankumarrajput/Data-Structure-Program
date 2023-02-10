#include <iostream>
#include <iomanip>
#include <vector>
#define N 10
using namespace std;
int i, j, data;



int countDigit(vector<int> &list, int maxdigit)
{
    int cout_elem = 0;
    for (auto elem : list)
    {
        while (elem != 0)
        {
            elem = elem / 10;
            cout_elem++;
        }
        if (maxdigit < cout_elem)
            maxdigit = cout_elem;
        cout_elem = 0;
    }
    return maxdigit;
}

void sortingTable(vector<int> &list, int maxdigit, int rows)
{
    int rem, elem, k, l;

    for (k = 0; k < maxdigit; k++)
    {
        int table[rows][N] = {0};

        for (i = 0; i < rows; i++)
        {
            elem = (list[i]);
            for (l = 0; l < k; l++)
                elem = elem / 10;
            rem = elem % 10;
            table[i][rem] = list[i];
        }

        list.clear();

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < rows; j++)
            {
                data = table[j][i];
                if (data != 0)
                    list.push_back(data);
            }
        }
    }
}

void printlist(const vector<int> &list)
{
    cout << "\n[";

    for (const auto &elem : list)
    {
        cout << elem << " ";
    }
    cout << "]";
}

int main()
{
    int maxdigit = 0;
    vector<int> list{123, 234, 523, 325, 324, 124, 13, 52, 324, 323, 3313, 2323, 2, 42, 1, 4, 113, 6};
    int rows = list.size();
    maxdigit = countDigit(list, maxdigit);
    printlist(list);
    sortingTable(list, maxdigit, rows);
    cout << endl
         << setfill('=') << setw(15) << ' ' << "After Sorting " << setw(15) << ' ' << endl;
    printlist(list);
}