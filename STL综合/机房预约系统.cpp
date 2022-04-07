#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << "请输入您的身份:" << endl;
        cout << "1.学生代表" << endl;
        cout << "2.教师" << endl;
        cout << "3.管理员" << endl;
        cout << "0.退出" << endl;
        cout << "请输入您的选择：" << endl;
        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1://学生代表
            break;
        case 2://教师
            break;
        case 3://管理员
            break;
        case 0://退出
            cout<<"欢迎下次使用！"<<endl<<"按任意键退出！"<<endl;
            cin.get();
            cin.get();
            system("clear");
            return 0;
        default://错误
            cout<<"输入有误，请从新选择"<<endl;
            cout<<"请按任意建继续"<<endl;
            cin.get();
            cin.get();
            system("clear");
            break;
        }
    }
}