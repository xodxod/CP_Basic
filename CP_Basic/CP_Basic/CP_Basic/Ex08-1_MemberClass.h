#pragma once
#include "io.h"
#include <string>

class Member
{
private:
	string ID;
	string Name;
	int Point;
public:
	void SetId(string ID);
	string GetId();

	void SetName(string Name);
	string GetName();

	void SetPoint(int Point);
	int GetPoint();

	void PrinNumber();
};
