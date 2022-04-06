#include"boss.h"
#include<iostream>
#include<string>
using namespace std;

Boss::Boss(int id, string name, int dID)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dID;
}

void Boss::showInfo()
{
	cout << "ְ�����?:" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDepeptName()
		<< "\t��λְ�𣺹�����˾��������" << endl;
}

string Boss::getDepeptName()
{
	return string("�ϰ�");
}