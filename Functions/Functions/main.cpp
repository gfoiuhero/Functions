#include "Function.h"
#include"Memory.cpp"
#include"BaseFunction.cpp"
#include"arrays2d.cpp"



typedef double T;

void main()
{
	setlocale(LC_ALL, "");

	int m;//���������� �����
	int n;//���������� ��������� � ������
	int index;


	cout << "������� ���������� �����: "; cin >> m;
	cout << "������� ���������� ��������� � ������: "; cin >> n;
	//���������� ���������� �������
	T** arr = allocate<T>(m, n);
	///////////////////////////////////////////////////////////
	FillRand(arr, m, n);
	Print(arr, m, n);
	/*arr = push_row_back2(arr, m, n);
	Print(arr, m, n);
	arr = push_row_front2(arr, m, n);
	Print(arr, m, n);
	cout << "������� ���� ������ �������� ����� ������ : "; cin >> index;
	arr = insert2(arr, m, n, index);
	Print(arr, m, n);

	cout << "������� ������ ������ ������� ������ : "; cin >> index;
	arr = erase2(arr, m, n, index);
	Print(arr, m, n);

	push_col_back(arr, m, n);
	Print(arr, m, n);

	push_col_front(arr, m, n);
	Print(arr, m, n);
	cout << "������� ���� ������ �������� ������� : "; cin >> index;
	insert_col(arr, m, n, index);
	Print(arr, m, n);

	pop_col_back(arr, m, n);
	Print(arr, m, n);

	pop_col_front(arr, m, n);
	Print(arr, m, n);


	cout << "������� ������ ������ ������� ������� : "; cin >> index;
	erase_col(arr, m, n, index);
	Print(arr, m, n);*/

	//////////////////////////////////////////////////////////
	//�������� ���������� ������������� �������

	clear(arr, m);
}



