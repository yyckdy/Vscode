#pragma once
#include<iostream>
#include<string>

using namespace std;

class Worker
{
public:
	virtual void showInfo() = 0;//��ʾ������Ϣ

	virtual string getDepeptName() = 0;//��ȡ��λ����

	int m_Id;//ְ�����

	string m_Name;//ְ������

	void Add_Emp();//���ְ��

	int m_DeptId;//���ű��
};