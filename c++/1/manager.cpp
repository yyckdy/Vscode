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
	cout << "ְ�����:" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDepeptName()
		<< "\t��λְ������ϰ彻��������" << endl;
}


string Manager::getDepeptName()
{
	return string("����");
}