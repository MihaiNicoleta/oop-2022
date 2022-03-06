// explicitez metodele
#include<iostream>
#include "NumberList.h"
#define _CRT_SECURE_NO_WARNINGS

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	count++;
    if (count >= 10)
        return false;
    else return true;
}

void NumberList::Sort()
{
    bool sortat;
    do
    {
        sortat = true;
        for (int i = 0; i < count - 1; i++)
            if (this->numbers[i] > this->numbers[i + 1])
            {
                int aux = this->numbers[i];
                this->numbers[i] = this->numbers[i + 1];
                this->numbers[i + 1] = aux;
                sortat = false;
            }
    } while (!sortat);
}

void NumberList::Print()
{
    for (int i = 0; i < count ; i++)
        std::cout << this->numbers[i] << ' ';
}
