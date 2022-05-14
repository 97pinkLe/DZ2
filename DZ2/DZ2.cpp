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
    int mas[5] = { 10, 9, 1, 21, -12 };


	printArr(mas, m);
	void(*z)(int* x, int size);
	z = down(mas, m);
}