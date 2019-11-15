#include"Function.h"

template<typename T>T** push_row_back(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[m] = new T[n]{};
	m++;
	return arr;
}
template<typename T>T** push_row_front(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i + 1][j] = arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[0] = new  T[n]{};
	m++;
	return arr;
}
template<typename T>T** insert(T** arr, int& m, const int n, T index)
{
	if (index > m)return arr;
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i][j];
		}
	}
	for (int i = index; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i + 1][j] = arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[index] = new T[n]{};
	m++;
	return arr;

}
template<typename T>T** pop_row_back(T** arr, int& m, const int n)
{
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m - 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	m--;
	return arr;
}
template<typename T>T** pop_row_front(T** arr, int& m, const int n)
{
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m - 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i + 1][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	m--;
	return arr;
}
template<typename T>T** erase(T** arr, int& m, const int n, T index)
{
	if (index > m)return arr;
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m - 1; i++)
	{
		buf[i] = new T[n]{};

	}
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i][j];
		}
	}
	for (int i = index; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buf[i][j] = arr[i + 1][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
	m--;
	return arr;
}



template<typename T>T** push_row_back2(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m; i++)
	{
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[m] = new T[n]{};
	m++;
	return arr;
}
template<typename T>T** push_row_front2(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i + 1] = arr[i];

	}
	delete[] arr;
	arr = buf;
	arr[0] = new T[n]{};
	m++;
	return arr;
}
template<typename T>T** insert2(T** arr, int& m, const int n, int& index)
{
	if (index > m)return arr;
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < index; i++)
	{
		buf[i] = arr[i];

	}
	for (int i = index; i < m; i++)
	{
		buf[i + 1] = arr[i];

	}
	delete[] arr;
	arr = buf;
	arr[index] = new T[n]{};
	m++;
	return arr;

}
template<typename T>T** pop_row_back2(T** arr, int& m, const int n)
{
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m - 1; i++)
	{
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[m] = new T[n]{};
	m--;
	return arr;
}
template<typename T>T** pop_row_front2(T** arr, int& m, const int n)
{
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m; i++)
	{
		buf[i] = arr[i + 1];

	}
	delete[] arr;
	arr = buf;
	m--;
	return arr;
}
template<typename T>T** erase2(T** arr, int& m, const int n, T index)
{
	if (index > m)return arr;
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < index; i++)
	{
		buf[i] = arr[i];

	}

	for (int i = index; i < m; i++)
	{
		buf[i] = arr[i + 1];

	}
	delete[] arr;
	arr = buf;
	m--;
	return arr;
}


template<typename T>T** push_col_back(T** arr, const int m, int& n)
{

	for (int i = 0; i < m; i++)
	{
		T* buf = new T[n + 1];
		for (int j = 0; j < n; j++)
		{
			buf[j] = arr[i][j];
		}
		buf[n] = 0;
		delete[] arr[i];
		arr[i] = buf;
	}
	delete[] arr;

	n++;
	return arr;
}
template<typename T>T** push_col_front(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T*buf = new T[n + 1];
		for (int j = 0; j < n + 1; j++)
		{
			buf[j + 1] = arr[i][j];
		}
		buf[0] = 0;
		delete[] arr[i];
		arr[i] = buf;
	}
	delete[] arr;

	n++;
	return arr;
}
template<typename T>T** insert_col(T** arr, const int m, int& n, T index)
{
	if (index > n)return arr;
	for (int i = 0; i < m; i++)
	{
		T*buf = new T[n + 1];
		for (int j = 0; j < index; j++)
		{
			buf[j] = arr[i][j];
		}

		for (int j = index; j < n + 1; j++)
		{
			buf[j + 1] = arr[i][j];
		}

		buf[index] = 0;
		delete[] arr[i];
		arr[i] = buf;
	}
	delete[] arr;

	n++;
	return arr;
}
template<typename T>T** pop_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buf = new T[n - 1];
		for (int j = 0; j < n - 1; j++)
		{
			buf[j] = arr[i][j];
		}
		delete[] arr[i];
		arr[i] = buf;
	}
	delete[] arr;
	n--;
	return arr;
}
template<typename T>T** pop_col_front(T** arr, const int m, int& n)
{

	for (int i = 0; i < m; i++)
	{
		T*buf = new T[n - 1];
		for (int j = 0; j < n; j++)
		{
			buf[j] = arr[i][j + 1];
		}

		delete[] arr[i];
		arr[i] = buf;
	}
	delete[] arr;
	n--;
	return arr;
}
template<typename T>T** erase_col(T** arr, const int m, int& n, T index)
{
	if (index > n)return arr;
	for (int i = 0; i < m; i++)
	{
		T* buf = new T[n - 1]{};
		for (int j = 0; j < index; j++)buf[j] = arr[i][j];
		for (int j = index; j < n; j++)	buf[j] = arr[i][j + 1];
		arr[i] = buf;
	}

	n--;
	return arr;
}