#pragma once

class Airplane
{
private:
	int Energy;
	int SpecialBombNumber;

public:
	int Temp;
	Airplane(); //Ŭ���� ���� ����� ���� �ѹ� ���� => �ʱ�ȭ, �⺻ ������(Default Constructor)
	Airplane(int EnergyNumber, int BombNumber);//�Ű����� ���� �޾Ƽ� Ŭ���� �ʱ�ȭ�� /�� ���
	~Airplane();

	void SetEnergy(int EnergyNumber);
	int GetEnergy();

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};
