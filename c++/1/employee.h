//普通员工文件
#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

class Employee:public Worker
{
public:
	Employee(int id,string name,int dID);

    void showInfo();

	string getDepeptName();
};