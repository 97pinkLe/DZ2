#include "Header.h"

using std::swap;

void invers(int* mas, unsigned size) {
	cout << "Сумма элементов в массиве равна его первому элементу\n";
	int c = 0;
	for (int i = 0; i < (size / 2); i++) {
		c = mas[i];
		mas[i] = mas[size - 1 - i];
		mas[size - 1 - i] = c;
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
}

void up(int* mas, unsigned size) {
	cout << "Сумма элементов в массиве больше его первого элемента\n";
	const int N = size;
	for (int i = 0; i < N - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N; j++) { if (mas[j] < mas[min]) min = j; }

		swap(mas[i], mas[min]);
	}
	for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
}

void down(int* mas, unsigned size) {
	cout << "Сумма элементов в массиве меньше его первого элемента\n";
	const int N = size;
	for (int i = 0; i < N - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N; j++) { if (mas[j] < mas[min]) min = j; }

		swap(mas[i], mas[min]);
	}
	for (int i = N - 1; i >= 0; i--)
		cout << mas[i] << " ";
}

void printArr(int* arr, unsigned size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}