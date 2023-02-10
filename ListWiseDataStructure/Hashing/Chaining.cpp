#include <iostream>
#include <array>
#include <set>
#include <algorithm>
using namespace std;
array<set<int>, 10> create_Hash_table()
{
    array<set<int>, 10> HT;
    return HT;
}
int give_index(array<set<int>, 10> &HT, int key)
{
    return key % 10;
}
bool insert_key(array<set<int>, 10> &HT, int key)
{
    int index = give_index(HT, key);
    auto it = HT[index].insert(key);
    return it.second;
}
pair<int, int> find_key(array<set<int>, 10> &HT, int key)
{
    int index = give_index(HT, key);
    set<int>::iterator it = find(HT[index].begin(), HT[index].end(), key);
    pair<int, int> p{index, *it};
    if (it != HT[index].end())
    {
        return p;
    }
    else
    {
        pair<int, int> p{index, 0};

        return p;
    }
}

bool delete_key(array<set<int>, 10> &HT, int key)
{
    int index = give_index(HT, key);
    set<int>::iterator it = find(HT[index].begin(), HT[index].end(), key);
    if (it != HT[index].end())
    {
        HT[index].erase(it);
        return true;
    }
    else
        return false;
}
int main()
{
    array<set<int>, 10> HT = create_Hash_table();
    insert_key(HT, 14);
    insert_key(HT, 134);
    insert_key(HT, 155);
    insert_key(HT, 145);
    insert_key(HT, 115);
    insert_key(HT, 15);
    insert_key(HT, 225);

    auto it = find_key(HT, 134);
    cout << it.first << " " << it.second << endl;
    delete_key(HT, 134);
    auto it1 = find_key(HT, 134);
    cout << it1.first << " " << it1.second << endl;


    auto it1 = find_key(HT, 115);
    cout << it1.first << " " << it1.second << endl;
    auto it2 = find_key(HT, 155);
    cout << it2.first << " " << it2.second << endl;
    auto it3 = find_key(HT, 225);
    cout << it3.first << " " << it3.second << endl;
    auto it4 = find_key(HT, 15);
    cout << it4.first << " " << it4.second << endl;

}