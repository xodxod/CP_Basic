#include "Ex09_Inherit.h"
#include <string>
#include <iostream>
using namespace std;

void CPerson::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
}

string CPerson::GetName()
{
	return this->Name;
}

int CPerson::GetAge()
{
	return this->Age;
}

int CPerson::GetGender()
{
	return this->Gender;
}

void CStudent::Set(string Name, int Age, int Gender, int Id, string Major)
{
	CPerson::Set(Name, Age, Gender);
	this->Id = Id;
	this->Major = Major;
}

void CStudent::Print()
{
	cout << "----------------------------" << endl;
	cout << "�̸�: " << GetName() << endl;
	cout << "����: " << GetAge() << endl;
	if (GetGender() == 1)
	{
		cout << "����: ����" << endl;
	}
	else {
		cout << "����: ����" << endl;
	}
	cout << "ID: "<< Id << endl;
	cout << "����: "<< Major << endl;
}