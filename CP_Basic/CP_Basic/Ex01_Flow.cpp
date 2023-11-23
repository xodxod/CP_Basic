#include "io.h"
//1번 문제
void EvenOdd()
{
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) {
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
}

//5번 문제
//continue : continue 키워드 이후의 코드를 실행하지 않고 통과

void PrintEven()
{
	for (int i = 1; i <= 100; i++) {
		/*
		if (i % 2 == 0) {
			cout << i << endl;
		}
		else {
			continue;
		}
		*/
		//2
		/*
		if (i % 2 != 0) {
			continue;
		}
		else {
			cout << i << endl;
		}
		*/

		//3
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;
	}
}

//6-2
void Median(float StartNumber, float EndNumber)
{
	cout << (StartNumber + EndNumber) / 2 << endl;
}

void StandardGrad()
{
	int Grade = 0;
	cin >> Grade;

	switch (Grade) {
		case 1:
			Median(0, 4);
			break;
		case 2:
			Median(4, 11);
			break;
		case 3:
			Median(11,23);
			break;
		case 4:
			Median(23, 40);
			break;
		case 5:
			Median(40, 60);
			break;
		case 6:
			Median(60, 77);
			break;
		case 7:
			Median(77, 89);
			break;
		case 8:
			Median(89, 96);
			break;
		case 9:
			Median(96, 100);
			break;


	}
}

void StandardGrad2()
{
	int Grade = 0;
	cin >> Grade;
	if (Grade >= 96) {
		cout << "9등급" << endl;
	}
	else if (Grade >= 89) {
		cout << "8등급" << endl;
	}
	else if (Grade >= 77) {
		cout << "7등급" << endl;
	}
	else if (Grade >= 60) {
		cout << "6등급" << endl;
	}
	else if (Grade >= 40) {
		cout << "5등급" << endl;
	}
	else if (Grade >= 23) {
		cout << "4등급" << endl;
	}
	else if (Grade >= 11) {
		cout << "3등급" << endl;
	}
	else if (Grade >= 4) {
		cout << "2등급" << endl;
	}
	else if (Grade >= 0) {
		cout << "1등급" << endl;
	}
	
}