#include <iostream>
using namespace std;
#include "Queue.cpp"
void BFS(int G[][6], int start, int n)

{
    int i = start;
    int visited[6] = {0};
    cout << i + 1 << endl;
    visited[i] = 1;
    enqueue(i);
    while (!isEmpty())
    {
        i = dequeue();
        for (int j = 0; j < n; j++)
        {
            if (G[i][j] == 1 && visited[j] == 0)
            {
                cout << j + 1 << endl;
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}

void DFS(int G[][6], int start, int n)
{
    static int visited[6] = {0};
    if (visited[start] == 0)
    {
        cout << start + 1 << endl;
        visited[start] = 1;
        for (int j = 0; j < n; j++)
        {
            if (G[start][j] == 1 && visited[j] == 0)
                DFS(G, j, n);
        }
    }
}

int main()
{
    int G[][6] =
        {
            {0, 1, 1, 0, 0, 0},
            {1, 0, 0, 1, 0, 0},
            {1, 0, 0, 1, 0, 0},
            {0, 1, 1, 0, 1, 1},
            {0, 0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0, 0}};
    cout << "==============BFS===========\n";
    BFS(G, 5 - 1, 6);
    cout << "==============DFS===========\n";
    DFS(G, 5 - 1, 6);
}
