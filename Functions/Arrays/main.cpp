#include"Function.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	cout << "����� ��������� ������:\t" << Sum(Arr, n) << endl;
	cout << "������� ��������������:\t" << Avg(Arr, n) << endl;
	//cout << "����������� �������� � �������:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);

	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
}

//int  minValueIn(int Arr[], const int n)
//{
//	int min = Arr[0];
//
//}