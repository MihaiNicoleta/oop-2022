#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <cstring>
#include <cstdarg>
#include <stdlib.h>
#include<iostream>
class Sort
{
    int* vector;
    int l;
    void quickSort(int low, int high);
    int partition(int low, int high);
    void swap(int&, int&);

public:

    Sort(int, int, int);

    Sort(int, int*);

    Sort(const char*);

    Sort(int count, ...);

    Sort();


    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};