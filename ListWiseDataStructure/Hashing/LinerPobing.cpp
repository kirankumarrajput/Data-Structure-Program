#include <iostream>
#include <array>
#define N 10
using namespace std;
int give_index(auto &HT, auto key)
{
    return key % 10;
}
int probe(const array<int, N> &HT, int index)
{
    int i = 0, count = 0;
    while (HT[(index + i) % N] != 0)
    {
        i++;
        count++;
        if (count >= N)
            return N + 1;
    }
    return ((index + i) % N);
}
bool inset(array<int, N> &HT, int key)
{
    int index = give_index(HT, key);
    if (HT[index] != 0)
    {
        index = probe(HT, index);
    }
    if (index < N)
    {
        HT[index] = key;
        return true;
    }
    else
    {
        cout << "Hash table full\n";
        return false;
    }
}
int probe_search(const array<int, N> &HT, int index,int key)
{
     int i = 0, count = 0;
    while (HT[(index + i) % N] != key)
    {
        i++;
        count++;
        if (count >= N)
            return N + 1;
    }
    return ((index + i) % N);
}

int search(const array<int, N> &HT, int key)
{
    int index = give_index(HT, key);
    if (HT[index] != key)
    {
        index = probe_search(HT, index,key);
    }
    if (index < N)
    {
        return index;
    }
    else
    {
        cout << "Key not found  ";
        return false;
    }
}

int main()
{
    array<int, N> HT{0};

    inset(HT, 10);
    inset(HT, 2);
    inset(HT, 3);
    inset(HT, 4);
    inset(HT, 5);
    inset(HT, 61);
    inset(HT, 80);
    inset(HT, 7);
    inset(HT, 9);
    inset(HT, 10);
    inset(HT, 11);

    
    cout<<search(HT, 7)<<endl;
    cout<<search(HT, 70)<<endl;
    cout<<search(HT, 72)<<endl;
    cout<<search(HT, 2)<<endl;
}