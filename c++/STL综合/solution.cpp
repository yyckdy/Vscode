#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);

    for (auto val : v)
    {
        cout << val << endl;
    }

    cout << "------------" << endl;
    int nums[] = {10, 20, 30, 40, 50};
   
    for (auto val : nums)
    {
        cout<<val<<endl;
    }
}