#include "io.h"

void Arithmetic() {
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;
}

void Increment() 
{
	//	���� ���꿡�� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	Inc += 3;
	cout << Inc << endl;

	Inc = Inc + 1;
	Inc += 1;
	Inc++;
}

void CompareFunction()
{
	/*
		�� ����
		ũ����� ����� ��/���� => ������� 1/0
		true : �� : 1
		false : ����: 0
	*/

	int Compare1 = 10;
	int Compare2 = 20;

	// >: ũ��, <:�۴� =>	������ ����
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 10) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;
}

void Logical()
{
	//�� ����: bool ������ ����
	/*
		AND : && ( & : ampersand)
		true && ture : true
		true && false: false
		=> bool �����Ͱ� �� true �� �� ����� true

		OR : || (| : pipe)
		flase || true : true
		false || false : false
		=>bool ������ �� �ϳ��� true �̸� ����� true

		NOT : !
		(false) => true
	*/

	int Compare1 = 10;
	int Compare2 = 20;

	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << (!(Compare1 < Compare2)) << endl;
}
