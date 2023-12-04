#include "Ex08-1_MemberClass.h"

void Member::SetId(string ID)
{
	this->ID = ID;
}

string Member::GetId()
{
	return this->ID;
}

void Member::SetName(string Name)
{
	this->Name = Name;
}

string Member::GetName()
{
	return this->Name;
}

void Member::SetPoint(int Point )
{
	this->Point = Point;
}

int Member::GetPoint()
{
	return this->Point;
}
/*
void Member::PrinNumber()
{

}
*/