#pragma once
#include <string>
/*
	1)CRobot Ŭ���� - Set, Print
	2)CRobot Ŭ���� => �κ� ��(������)�� ��� ���
*/
class CRobot
{
private:
	std::string Name;
	int Height = 0;
	int Weight = 0;
	int HP = 0;
public:
	void Set(std::string Name, int Height,int Weight, int HP);
	void Print();
};