#include"Function.h"


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