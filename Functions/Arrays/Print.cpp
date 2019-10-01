#include"Function.h"

template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);




template<typename T>void Print(T Arr[], const int n)
{

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
