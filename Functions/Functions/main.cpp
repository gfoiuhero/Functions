#include<iostream>
#include<ctime>
using std::cin;
using std::cout;
using std::endl;


template<typename T>void FillRand(T**arr, const int m, const int n);
template<typename T>void Print(T**arr, const int m, const int n);


//template<typename T>T** push_row_back(T** arr, int& m, const int n);
//template<typename T>T** push_row_front(T** arr, int& m, const int n);
//template<typename T>T** insert(T** arr, int& m, const int n, T index);
//template<typename T>T** pop_row_back(T** arr, int& m, const int n);
//template<typename T>T** pop_row_front(T** arr, int& m, const int n);
//template<typename T>T** erase(T** arr, int& m, const int n, T index);
template<typename T>T** push_row_back2(T** arr,int& m, const int n);
template<typename T>T** push_row_front2(T** arr,int& m, const int n);
template<typename T>T** insert2(T** arr,int& m, const int n, int& index);
template<typename T>T** pop_row_back2(T** arr,int& m, const int n);
template<typename T>T** pop_row_front2(T** arr,int& m, const int n);
template<typename T>T** erase2(T** arr, int& m, const int n, T index);



template<typename T>T** push_col_back(T** arr, const int m,  int& n);
template<typename T>T** push_col_front(T** arr, const int m, int& n);
template<typename T>T** insert_col(T** arr, const int m, int& n, T index);
template<typename T>T** pop_col_back(T** arr, const int m, int& n);
template<typename T>T** pop_col_front(T** arr, const int m, int& n);
template<typename T>T** erase_col(T** arr, const int m, int& n,T index);

template<typename T>T** allocate(const int m, const int n);
template<typename T>void clear(T** arr, const int m);
void main()
{
	setlocale(LC_ALL, "");

	int m;//количество строк
	int n;//количество элементов в строке
	int index;


	cout << "¬ведите количество строк: "; cin >> m;
	cout << "¬ведите количество элементов в строке: "; cin >> n;
	//ќбъ€вление двумерного массива
	int** arr = allocate<int>(m, n);
	///////////////////////////////////////////////////////////
	FillRand(arr, m, n);
	Print(arr, m, n);
	arr = push_row_back2(arr, m, n);
	Print(arr, m, n);
	arr = push_row_front2(arr, m, n);
	Print(arr, m, n);
	cout << "¬ведите куда хотите добавить новую строку : "; cin >> index;
	arr = insert2(arr, m, n, index);
	Print(arr, m, n);

	cout << "¬ведите откуда хотите удалить строку : "; cin >> index;
	arr = erase2(arr, m, n, index);
	Print(arr, m, n);

	push_col_back(arr, m, n);
	Print(arr, m, n);

	push_col_front(arr, m, n);
	Print(arr, m, n);
	cout << "¬ведите куда хотите вставить столбец : "; cin >> index;
	insert_col(arr, m, n, index);
	Print(arr, m, n);

	pop_col_back(arr, m, n);
	Print(arr, m, n);

	pop_col_front(arr, m, n);
	Print(arr, m, n);


	cout << "¬ведите откуда хотите удалить столбец : "; cin >> index;
	erase_col(arr, m, n, index);
	Print(arr, m, n);

	//////////////////////////////////////////////////////////
	//”даление двумерного динамического массива

	clear(arr, m);
}
////////////////////////////////////////////////////////
template<typename T>void FillRand(T**arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}
template<typename T>void Print(T**arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
////////////////////////////////////////////////////////////////////////
template<typename T>T** push_row_back(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n] {};

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
	arr[m] = new T [n] {};
	m++;
	return arr;
}
template<typename T>T** push_row_front(T** arr, int& m, const int n)
{
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n] {};

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
	arr[0] = new  T [n] {};
	m++;
	return arr;
}
template<typename T>T** insert(T** arr, int& m, const int n, T index)
{
	if (index > m)return arr;
	T** buf = new T*[m + 1]{};
	for (int i = 0; i < m + 1; i++)
	{
		buf[i] = new T[n] {};

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
	arr[index] = new T [n] {};
	m++;
	return arr;

}
template<typename T>T** pop_row_back(T** arr, int& m, const int n)
{
	T** buf = new T*[m - 1]{};
	for (int i = 0; i < m - 1; i++)
	{
		buf[i] = new T[n] {};

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
		buf[i] = new T[n] {};

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
		buf[i] = new T[n] {};

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
	arr[m] = new T [n] {};
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
	arr[0] = new T [n] {};
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
	arr[index] = new T [n] {};
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
	arr[m] = new T  [n] {};
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
template<typename T>T** erase2(T** arr, int& m, const int n,T index)
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
template<typename T>T** insert_col(T** arr, const int m, int& n,T index)
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


template<typename T>T** allocate(const int m, const int n)
{
	T** arr = new T*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n] {};
	}
	return arr;
}
template<typename T>void clear(T** arr, const int m)
{
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}