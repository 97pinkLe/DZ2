#pragma once
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

void invers(int* mas, unsigned size);
void up(int* mas, unsigned size);
void down(int* mas, unsigned size);
int sum(int a, int b);
int mapp(int* arr, unsigned size, int (*fun)(int, int));
void (*fun(int* mas, int m))(int* x, int size);
void printArr(int* arr, unsigned size);