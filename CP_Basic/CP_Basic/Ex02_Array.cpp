#include "io.h"

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
int ArrSize = sizeof(arr) / sizeof(arr[0]);

void ArraySum()
{
	int Sum = 0;
	for (int i = 0; i < ArrSize; i++) {
		Sum += arr[i];
	}
	cout << Sum << endl;
}

void Sort()
{
	int Temp = 0;
	//���� ���� : �ݺ� - ��ü ����Ŭ,������ ���� ��
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				Temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			cout << arr[i] << endl;
		}
		else {
			cout << arr[i] << " : ";
		}
	}

	cout << endl;
	cout << "�ּҰ�: " << arr[0] << endl;
	cout << "�ִ밪: " << arr[ArrSize - 1] << endl;
}

void Reverse() 
{
	int TempArr[10];

	for (int i = 0; i < 10; i++) {
		TempArr[i] = arr[9 - i];
	}
	for (int i = 0; i < 10; i++) {
		arr[i] = TempArr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " : ";
	}
}

#define ROWS 4
#define COLS 3
void abcd()
{
	int a[ROWS][COLS]{ 
		{100,100,50},
		{90,70,80},
		{70,80,90},
		{80,100,90} 
	};

	for (int i = 0; i < ROWS; i++) {
		int total_scores = a[i][0] + a[i][1] + a[i][2];
		int sum_scores = (a[i][0] + a[i][1] + a[i][2]) / 3;
		
		cout << i+1 << endl;
		cout << total_scores << endl;
		cout << sum_scores << endl;
	}
	
}