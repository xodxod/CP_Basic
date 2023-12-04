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
	//	증감 연산에는 반복 실행의 개념이 포함
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
		비교 연산
		크기비교의 결과는 참/거짓 => 실제출력 1/0
		true : 참 : 1
		false : 거짓: 0
	*/

	int Compare1 = 10;
	int Compare2 = 20;

	// >: 크다, <:작다 =>	방향이 고정
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 10) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;
}

void Logical()
{
	//논리 연산: bool 데이터 연산
	/*
		AND : && ( & : ampersand)
		true && ture : true
		true && false: false
		=> bool 데이터가 몯 true 일 때 결과가 true

		OR : || (| : pipe)
		flase || true : true
		false || false : false
		=>bool 데이터 중 하나만 true 이면 결과가 true

		NOT : !
		(false) => true
	*/

	int Compare1 = 10;
	int Compare2 = 20;

	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << (!(Compare1 < Compare2)) << endl;
}
