#include "Ex09_Inherit.h"
#include "io.h"

void PrintCStudent()
{
	CStudent s1;
	s1.Set("ºËµπ¿Ã", 22, 1, 1000, "∑Œ∫ø ¡∂¡§");
	s1.Print();

	CStudent s2;
	s2.Set("Ω…√ª¿Ã", 18, 2, 1001, "ø’∫Ò");
	s2.Print();
}