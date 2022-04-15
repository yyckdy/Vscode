#pragma once
#include <iostream>
#include "identity.h"
using namespace std;
class Student : public Identity
{
public:
    Student(int id, string name, string passWord);

    Student();
    //操作函数
    virtual void openMenu();

    //申请预约
    void applyOrder();

    //查看自身预约
    void showOrder();

    //查看所有预约
    void showAllOrder();

    //取消预约
    void cancelOrder();

    int m_Id;
};
