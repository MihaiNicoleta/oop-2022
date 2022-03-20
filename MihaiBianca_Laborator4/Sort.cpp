#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <cstring>
#include <cstdarg>
#include <stdlib.h>
#include<iostream>
Sort::Sort(int n, int min, int max)
{
	l = n;
	vector = new int[l];
	for (int i = 0; i < l; i++)
		vector[i] =  (rand() % (max-min)) + min;

}

Sort::Sort(int n, int*a)
{
	l = n;
	vector = new int[l];
	for (int i = 0; i < l; i++)
		vector[i] = a[i];

}

Sort::Sort(const char* sir)
{
	char* p;
	char* buffer = new char[strlen(sir) + 1];
	strcpy(buffer, sir);
	p = strtok(buffer, ",");
	vector = new int[strlen(sir) + 1];
	int contor = 0;
	while (p != NULL)
	{
		char* numar;
		numar = new char[strlen(p) + 1];
		strcpy(numar, p);
		int element = 0;
		element = atoi(numar);
		vector[contor] = element;
		contor++;
		p = strtok(NULL, ",");
	}
	l = contor;
	delete[] buffer;
}

Sort::Sort(int count, ...)
{
	vector = new int[count];
	l = count;
	va_list arg;
	va_start(arg, count);
	for (int i = 0; i < count; i++)
		vector[i] = va_arg(arg, int);
}


void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < this->l; i++) {
		int c = vector[i];
		int j = i - 1;
		while (j >= 0 && vector[j] > c) {
			vector[j + 1] = vector[j];
			j--;
		}
		vector[j + 1] = c;
	}

}

void Sort::QuickSort(bool ascendent)
{
	quickSort(0, l - 1);

}
void Sort::quickSort(int low, int high) {
	if (low < high) {
		int pi = partition(low, high);

		quickSort(low, pi - 1);
		quickSort(pi + 1, high);
	}
}
int Sort::partition(int low, int high) {

	int pivot = vector[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (vector[j] < pivot) {
			i++;
			swap(vector[i], vector[j]);
		}
	}
	swap(vector[i + 1], vector[high]);
	return (i + 1);
}

void Sort::BubbleSort(bool ascendent)
{
	bool sortat;
	do
	{
		sortat = true;
		for (int i = 0; i < l - 1; i++)
			if (vector[i] > vector[i + 1])
			{
				int aux = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = aux;
				sortat = false;
			}
	} while (!sortat);
}

void Sort::Print()
{
	for (int i = 0; i < l; i++) {
		std::cout << GetElementFromIndex(i) << " ";
	}
	std::cout << "\n";
}

int Sort::GetElementsCount()
{
	return l;
}
void Sort::swap(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

int Sort::GetElementFromIndex(int index)
{
	if (index >= 0 && index < l)
		return vector[index];
	else return -1;
}
