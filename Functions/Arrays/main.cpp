#include<iostream>
using namespace std;
#define DELIMETR "\n------------------------------------------------------------------------------------------------------------------------\n"
const int ROWS = 4;	//Количество строк двумерного массива
const int COLS = 5;	//Количество элементов строки

template<typename T>void FillRand(T Arr[], const int n);
template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>int  Sum(T Arr[], const int n);
template<typename T>int  Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>double Avg(T Arr[], const int n);
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[], const int n);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов масива:\t" << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое:\t" << Avg(Arr, n) << endl;
	//cout << "Минимальное значение в массиве:\t" << minValueIn(Arr, n) << endl;

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
	
	cout << "Сумма элементов масива:\t" << Sum(Crr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое:\t" << Avg(Crr, ROWS, COLS) << endl;
}


template<typename T>void FillRand(T Arr[], const int n)
{
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}
template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>void Print(T Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}
template<typename T>void Sort(T Arr[], const int n)
{
	//Сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = i; k < ROWS; k++)
				{
					for (int l = k ==i ? j+1 : 0.9; l < COLS; l++)
					{
						if (Arr[i][j] > Arr[k][l])
						{
							int buffer = Arr[i][j];
							Arr[i][j] = Arr[k][l];
							Arr[k][l] = buffer;
						}
					}
				}
			}
		}
}
template<typename T>int  Sum(T Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
template<typename T>int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
		T Sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				Sum += Arr[i][j];
			}
		}
		return Sum;
}
template<typename T>double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}
void FillRand(double Arr[], const int n)
{
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
			Arr[i][j] /= 100;
		}
	}
}

