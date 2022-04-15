#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
class Manager : public Identity
{
public:
    Manager();

    Manager(string name,string passWord);

    //操作函数
    virtual void openMenu();

    //添加账号
    void addPerson();

    //查看账号
    void showPerson();

    //查看机房信息
    void showComputer();

    //清空所有预约记录
    void clearFile();
};