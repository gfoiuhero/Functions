#include "Function.h"
#include"Memory.cpp"
#include"BaseFunction.cpp"
#include"arrays2d.cpp"



typedef double T;

void main()
{
	setlocale(LC_ALL, "");

	int m;//количество строк
	int n;//количество элементов в строке
	int index;


	cout << "¬ведите количество строк: "; cin >> m;
	cout << "¬ведите количество элементов в строке: "; cin >> n;
	//ќбъ€вление двумерного массива
	T** arr = allocate<T>(m, n);
	///////////////////////////////////////////////////////////
	FillRand(arr, m, n);
	Print(arr, m, n);
	/*arr = push_row_back2(arr, m, n);
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
	Print(arr, m, n);*/

	//////////////////////////////////////////////////////////
	//”даление двумерного динамического массива

	clear(arr, m);
}



