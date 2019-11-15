#pragma once
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
template<typename T>T** push_row_back2(T** arr, int& m, const int n);
template<typename T>T** push_row_front2(T** arr, int& m, const int n);
template<typename T>T** insert2(T** arr, int& m, const int n, int& index);
template<typename T>T** pop_row_back2(T** arr, int& m, const int n);
template<typename T>T** pop_row_front2(T** arr, int& m, const int n);
template<typename T>T** erase2(T** arr, int& m, const int n, T index);



template<typename T>T** push_col_back(T** arr, const int m, int& n);
template<typename T>T** push_col_front(T** arr, const int m, int& n);
template<typename T>T** insert_col(T** arr, const int m, int& n, T index);
template<typename T>T** pop_col_back(T** arr, const int m, int& n);
template<typename T>T** pop_col_front(T** arr, const int m, int& n);
template<typename T>T** erase_col(T** arr, const int m, int& n, T index);

template<typename T>T** allocate(const int m, const int n);
template<typename T>void clear(T** arr, const int m);




