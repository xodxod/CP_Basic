// CH01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //Input/Output Stream
#define NUMBER 100
using namespace std;

int main()
{
	std::cout << "Hello World!\n";

	//std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl;
	cout << NUMBER + 50 << endl;


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

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	//	증감 연산에는 반복 실행의 개념이 포함
	int Inc = 30;

	Inc = Inc + 3;
	Inc += 3;
	cout << Inc << endl;

	Inc = Inc + 1;
	Inc += 1;
	Inc++;


}

//비트와 바이트에 대한 이해
/*
	bit : 컴퓨터 데잍터 저장의 최소단위
	byte: 컴퓨터 정보 저장의 최소단위(8bit)
	1byte = 8bit

	2진수 숫자 데이터 ; 0,1
	진법 계산
	1010 = 2^3*1 + 2^2*0 + 2^1*1 + 2^0*0
	2^0~2^10: 1,2,4,8,16,32,64,128,*256,512,1024

	색표현,문자,아이피주소 표현: 1byte 기준으로 확장
	*/
