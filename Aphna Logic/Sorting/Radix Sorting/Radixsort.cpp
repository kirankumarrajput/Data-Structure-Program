#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#define N 10
using namespace std;
int i, j, data;
void printlist(const vector<int> &list);
int countDigit(vector<int> &list, int maxdigitLentgh);
void sortingTable(vector<int> &list);
void printArray(const int Array[][N], int);

int countDigit(vector<int> &list, int maxdigitLentgh)
{
    int coutelem = 0;
    for (auto elem : list)
    {
        while (elem != 0)
        {
            elem = elem / 10;
            coutelem++;
        }
        if (maxdigitLentgh < coutelem)
            maxdigitLentgh = coutelem;
        coutelem = 0;
    }
    cout << "maxdigitLentgh elements count : " << maxdigitLentgh << endl; // for debugging
    return maxdigitLentgh;
}

void sortingTable(vector<int> &list, int maxdigitLentgh, int rows)
{
    int rem, elem, k, l;

    for (k = 0; k < maxdigitLentgh; k++)
    {
        int table[rows][N] = {0};
        // cout << " rows= = " << list.size() << endl; // for debug

        for (i = 0; i < rows; i++)
        {
            elem = (list[i]);
            for (l = 0; l < k; l++)
                elem = elem / 10;
            rem = elem % 10;
            table[i][rem] = list[i];
        }

        list.clear();
        // printlist(list);   // for Debugging
        printArray(table, rows); // for Debugging

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

    printlist(list);
}

void printArray(const int Array[][N], int rows)
{
    cout << "\n\n";

    for (i = 0; i < rows; i++)
    {
        cout << "\n[ ";
        for (j = 0; j < N; j++)
        {
            cout << setw(5) << left << Array[i][j];
        }
        cout << "]";
    }
    cout << "\n\n";
}

void printlist(const vector<int> &list) // for Debugging
{
    cout << "\n[";

    for (const auto &elem : list)
    {
        cout << elem << " ";
    }
    cout << "]";
}
void pushElem(auto &list) // use data validation technique /// mast hai re baba
{
    int num;
    bool done = false;
    do
    {
        cout << "\nEnter number of  elemenst which you want to sort \n :: ";
        string str;
        cin >> str;
        istringstream iss{str};
        if (!(iss >> num))
            cout << " =======please try again \nEnter Integer value only======== ";
        else
        {
            cout << "Entered numer is  : " << num << "\n";
            done = true;
        }
    } while (!done);

    cout << "\nEnter Elemenst which you want to sort \n :: ";
    for (i = 0; i < num; i++)
    {

        do
        {
            string str;
            cin >> str;
            istringstream iss{str};
            if (!(iss >> data))
                cout << " =======\nEnter Integer value only========Continue entering data :: ";
            else
            {
                done = true;
            }
        } while (!done);
        list.push_back(data);
    }
}
int main()
{
    int maxdigitLentgh = 0;

    vector<int> list; //{123, 234, 523, 325, 324, 124, 13, 52, 324, 323, 3313, 2323, 2, 42, 1, 4, 113, 6};
    pushElem(list);
    int rows = list.size();
    maxdigitLentgh = countDigit(list, maxdigitLentgh);
    printlist(list);
    sortingTable(list, maxdigitLentgh, rows);
    cout << endl
         << setfill('=') << setw(15) << ' ' << "After Sorting " << setw(15) << ' ' << endl;
    printlist(list);
}

