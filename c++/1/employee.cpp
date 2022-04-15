#include"employee.h"
#include<iostream>
#include<string>
using namespace std;

Employee::Employee(int id, string name, int dID)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dID;
}

void Employee::showInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDepeptName()
		<< "\t��λְ����ɾ�������������" << endl;
}

string Employee::getDepeptName()
{
	return string("Ա��");
}