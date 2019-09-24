#pragma once 

#include<iostream>
using namespace std;

const int ROWS = 4;	//Количество строк двумерного массива
const int COLS = 5;	//Количество элементов строки

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int  Sum(int Arr[], const int n);
double Avg(int Arr[], const int n);
int  minValueIn(int Arr[], const int n);




