#pragma once
#include <string>

class Overloading
{
private:
	int Number;
	std::string Name;

public:
	int value = 0 ;
	Overloading();
	~Overloading();

	void Print();
	void Print(int Number);
	void Print(std::string Name);
	void Print(int Number, std::string Names);

	Overloading operator + (Overloading& arg);
};