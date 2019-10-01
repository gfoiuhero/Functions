#include"Function.h"

template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);




template<typename T>void Sort(T Arr[], const int n)
{

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
				for (int l = k == i ? j + 1 : 0.9; l < COLS; l++)
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