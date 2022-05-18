#include <iostream>
#include<string>
using namespace std;

float operator"" _Kelvin(unsigned long long x)
{
	return x - 273.15;
}
float operator"" _Fahrenheit(unsigned long long x)
{
	float celsius = (x - 32) * 5;
	celsius /= 9;
	return celsius;
}

int main()
{
	float a = 300_Kelvin;
	float b = 120_Fahrenheit;
	cout << a << ' ' << b << ' ';
	return 0;
}
