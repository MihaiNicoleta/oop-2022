#include "Math.h"
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdarg>
#include<cstring>
int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int rezultat = 0;
	std::va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		rezultat = rezultat + va_arg(args, int);
	}
	va_end(args);
	return rezultat;
}

char* Math::Add(const char* sir1, const char* sir2)
{
	if (sir1 == nullptr || sir2 == nullptr)
		return nullptr;
	char* sir = new char[strlen(sir1) + strlen(sir2) + 1];
	strcpy(sir, sir1);
	strcat(sir, sir2);
	return sir;
}


