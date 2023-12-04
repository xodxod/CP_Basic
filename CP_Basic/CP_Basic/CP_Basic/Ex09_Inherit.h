#pragma once
#include <string>
using namespace std;

class CPerson
{
private:
	string Name = { NULL }; 
	int Age = 0;
	int Gender = 0;

public:
	void Set(string Name, int Age, int Gender);
	string GetName();
	int GetAge();
	int GetGender();
};

class CStudent : public CPerson
{
private:
	int Id = 0;
	string Major = {NULL};
public:
	void Set(string Name, int Age, int Gender, int Id, string Major);
	void Print();
};