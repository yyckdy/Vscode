//经理文件
#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

class Manager :public Worker
{
public:
	Manager(int id, string name, int dID);

	void showInfo();

	string getDepeptName();
};