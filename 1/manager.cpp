#include"manager.h"
#include<iostream>
#include<string>
using namespace std;

Manager::Manager(int id, string name, int dID)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dID;
}

void Manager::showInfo()
{
	cout << "职工编号:" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDepeptName()
		<< "\t岗位职责：完成老板交给的任务" << endl;
}


string Manager::getDepeptName()
{
	return string("经理");
}