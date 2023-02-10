#include <iostream>
using namespace std;
#define M 4

int main()
{
    int i, j,var, A = 999;
    int W[][4] =
        {
            {0, 3, 7, 0},
            {0, 0, 5, 2},
            {0, 0, 0, 0},
            {4, 0, 1, 0},
        },
        Q[4][4] = {};

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (W[i][j] == 0)
                Q[i][j] = A;
            else
                Q[i][j] = W[i][j];
        }
    }

    for (int k = 0; k < M; k++)
    {
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < M; j++)
            {
                var = (Q[i][k] + Q[k][j]);
                Q[i][j] = ((Q[i][j]) < var ? (Q[i][j]) : var);
            }
        }

        cout << "==========" << k + 1 << "th Matrix=======";

        for (i = 0; i < M; i++)
        {
            cout << endl;
            for (j = 0; j < M; j++)
            {
                cout << Q[i][j] << " ";
            }
            cout << endl;
        }
    }
} 