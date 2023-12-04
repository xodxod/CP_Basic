#include "io.h"

void Variable() {
	int Number1;
	Number1 = 10;

	int Number2 = 10;

	int Number3 = 1, Number4 = 2;

	const int Number5 = 10; //값을 수정할 수 없음

	int Num1 = 10; //정수형 타입
	short Num2 = 10;
	long Num3 = 10;

	float Num10 = 1.234f; //실수형 타입
	double Num11 = 1.234;

	//문자데이터: 문자,문자열
	char Letter = 'a';

	//bool 타입 데이터
	bool Condition = true;

	//auto 선언 키워드
	auto AutoNum = 10;

	std::cout << Number1 << std::endl;
}