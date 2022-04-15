#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mySort(int val1, int val2)
{
    return val1 > val2;
}

void monkeySort(vector<int> &v)
{
    while (true)
    {
        random_shuffle(v.begin(), v.end());
        if (is_sorted(v.begin(), v.end(), mySort) == true)
        {
            break;
        }
    }
}

void myPrint(int val)
{
    cout << val << " ";
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 100);
    }
    cout << "before sort:" << endl;
    for_each(v.begin(), v.end(), myPrint);

    monkeySort(v);
    cout << endl
         << "after sort:" << endl;

    for_each(v.begin(), v.end(), myPrint);
}
