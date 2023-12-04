#include "io.h"
#include "CH17-1_OverloadingClass.h"

Overloading::Overloading()
{
	this->Number = 1;
	this->Name = "Altman";
}
Overloading::~Overloading() {}

void Overloading::Print()
{
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(int Number)
{
	this->Number = Number;
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(std::string Name)
{
	this->Name = Name;
	cout << this->Name << " : " << this->Number << endl;
}

void Overloading::Print(int Number, std::string Name)
{
	this->Name = Number;
	this->Name = Name;
	cout << this->Name << " : " << this->Number << endl;
}

Overloading Overloading::operator+(Overloading& arg)
{
	Overloading Temp;
	Temp.value = value + arg.Number;
	return Temp;
}