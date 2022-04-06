#pragma once
#include<iostream>
#include<string>

using namespace std;

class Worker
{
public:
	virtual void showInfo() = 0;//显示个人信息

	virtual string getDepeptName() = 0;//获取岗位名称

	int m_Id;//职工编号

	string m_Name;//职工姓名

	void Add_Emp();//添加职工

	int m_DeptId;//部门编号
};