#include "Ex09_Inherit.h"
#include "io.h"

void PrintCStudent()
{
	CStudent s1;
	s1.Set("�赹��", 22, 1, 1000, "�κ� ����");
	s1.Print();

	CStudent s2;
	s2.Set("��û��", 18, 2, 1001, "�պ�");
	s2.Print();
}