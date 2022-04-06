#include <iostream>
using namespace std;
#include <vector>
// vectors数据存取

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    //通过[]访问
    for (unsigned long i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //通过at访问
    for (unsigned long i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    //访问第一个元素
    cout << "第一个元素为：" << v1.front() << endl;

    //访问最后一个元素
    cout << "最后一个元素为： " << v1.back() << endl;
}

int main()
{

    test01();

    return 0;
}