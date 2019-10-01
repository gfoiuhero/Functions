#include"Function.h"
#include"Print.cpp"
#include"Sort.cpp"
#include"Avg.cpp"
#include"Sum.cpp"
#include"Stat.cpp"
#include"Fillrand.cpp"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Cуmmа:\t" << Sum(Arr, n) << endl;
	cout << "Среднее:\t" << Avg(Arr, n) << endl;
	//cout << "Минимальное:\t" << minValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	Sort(Brr, n);
	Print(Brr, n);

	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	Sort(Crr, ROWS, COLS);
	cout << DELIMETR << endl;
	Print(Crr, ROWS, COLS);

	cout << "суmmа:\t" << Sum(Crr, ROWS, COLS) << endl;
	cout << "Cреднее:\t" << Avg(Crr, ROWS, COLS) << endl;
}




