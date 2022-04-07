#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
class Teacher : public Identity
{
public:
    Teacher();

    Teacher(int empId, string name, string Password);

    virtual void openMenu();

    //查看所有预约
    void showAllOrder();

    //审核预约
    void validaOrder();

    int m_EmpId;
};