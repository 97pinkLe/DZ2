#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <algorithm>
#include "Header.h"

using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   
    int m = 5;
    int mas[5] = { 16, 14, -3, 21, 12 };


	printArr(mas, m);
	void(*z)(int* x, int size);
	z = fun(mas, m);
}