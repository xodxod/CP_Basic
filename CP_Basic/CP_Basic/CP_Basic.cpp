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

	const int Number5 = 10; //���� ������ �� ����

	int Num1 = 10; //������ Ÿ��
	short Num2 = 10;
	long Num3 = 10;

	float Num10 = 1.234f; //�Ǽ��� Ÿ��
	double Num11 = 1.234;

	//���ڵ�����: ����,���ڿ�
	char Letter = 'a';

	//bool Ÿ�� ������
	bool Condition = true;

	//auto ���� Ű����
	auto AutoNum = 10;

	std::cout << Number1 << std::endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	//	���� ���꿡�� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	Inc += 3;
	cout << Inc << endl;

	Inc = Inc + 1;
	Inc += 1;
	Inc++;


}

//��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte: ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ ; 0,1
	���� ���
	1010 = 2^3*1 + 2^2*0 + 2^1*1 + 2^0*0
	2^0~2^10: 1,2,4,8,16,32,64,128,*256,512,1024

	��ǥ��,����,�������ּ� ǥ��: 1byte �������� Ȯ��
	*/
