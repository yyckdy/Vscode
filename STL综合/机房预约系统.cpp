#include <iostream>
#include <fstream>
#include <string>
#include "identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
using namespace std;

void managerMenu(Identity * &manager)
{
    while(true)
    {
        manager->openMenu();
        
    }
}
/**
 * @brief 登陆功能
 * fileName 文件名
 * type 登陆类型
 */
void LoginIn(string fileName, int type)
{
    Identity *Person = NULL; //定义一个指针

    //读文件
    ifstream ifs;
    ifs.open(fileName, ios::in);

    //判断文件是否打开
    if (!ifs.is_open())
    {
        cout << "文件打开失败,文件不存在" << endl;
        ifs.close();
        return;
    }

    //准备接收信息
    int id = 0;
    string name;
    string password;

    //判断身份
    if (type == 1)
    {
        //学生
        cout << "请输入你的学号：" << endl;
        cin >> id;
    }
    else if (type == 2)
    {
        //老师
        cout << "请输入您的职工号：" << endl;
        cin >> id;
    }

    cout << "请输入用户名：" << endl;
    cin >> name;
    cout << "请输入密码：" << endl;
    cin >> password;

    if (type == 1)
    {
        //学生
        int fId;
        string fName;
        string fPassword;
        while (ifs >> fId && ifs >> fName && ifs >> fPassword)
        {
            //与用户输入的信息进行比较
            if (id == fId && name == fName && password == fPassword)
            {
                //登陆成功
                cout << "登陆成功" << endl;
                cout << "按任意键继续" << endl;
                cin.get();
                cin.get();
                system("clear");
                Person = new Student(id, name, password);
                //进入学生功能菜单
                return;
            }
        }
    }
    else if (type == 2)
    {
        //老师
        int fId;
        string fName;
        string fPassword;
        while (ifs >> fId && ifs >> fName && ifs >> fPassword)
        {
            //与用户输入的信息进行比较
            if (id == fId && name == fName && password == fPassword)
            {
                //登陆成功
                cout << "登陆成功" << endl;
                cout << "按任意键继续" << endl;
                cin.get();
                cin.get();
                system("clear");
                Person = new Teacher(id, name, password);
                //进入教师功能菜单
                return;
            }
        }
    }
    else if (type == 3)
    {
        //管理员
        string fName;
        string fPassword;
        while (ifs >> fName && ifs >> fPassword)
        {
            //与用户输入的信息进行比较
            if (name == fName && password == fPassword)
            {
                //登陆成功
                cout << "登陆成功" << endl;
                cout << "按任意键继续" << endl;
                cin.get();
                cin.get();
                system("clear");
                Person = new Manager(name, password);
                //进入管理员功能菜单
                return;
            }
        }
    }

    cout << "验证失败" << endl;
    cin.get();
    cin.get();
    system("cleae");
    return;
}

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
        case 1: //学生代表
            LoginIn(STUDENT_FILE, 1);
            break;
        case 2: //教师
            LoginIn(TEACHER_FILE, 2);
            break;
        case 3: //管理员
            LoginIn(ADMIN_FILE, 3);
            break;
        case 0: //退出
            cout << "欢迎下次使用！" << endl
                 << "按任意键退出！" << endl;
            cin.get();
            cin.get();
            system("clear");
            return 0;
        default: //错误
            cout << "输入有误，请从新选择" << endl;
            cout << "请按任意建继续" << endl;
            cin.get();
            cin.get();
            system("clear");
            break;
        }
    }
}