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
    while (HT[(index + i*i) % N] != 0)
    {
        i++;
        count++;
        if (count >= N)
            return N + 1;
    }
    return ((index + i*i) % N);
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
    while (HT[(index + i*i) % N] != key)
    {
        i++;
        count++;
        if (count >= N)
            return N + 1;
    }
    return ((index + i*i) % N);
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
    inset(HT, 21);
    inset(HT, 43);
    inset(HT, 73);
    inset(HT, 56);
    inset(HT, 61);
    inset(HT, 80);
    inset(HT, 78);
    inset(HT, 9);
    inset(HT, 10);
    inset(HT, 11);

    
    cout<<search(HT, 78)<<endl;
    cout<<search(HT, 9)<<endl;
    cout<<search(HT, 43)<<endl;
    cout<<search(HT, 2)<<endl;
}