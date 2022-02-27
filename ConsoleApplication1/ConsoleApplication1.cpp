///////////////////////////
//PROBLEMA 1 LABORATOR 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
char linie[255];

int parcurgereSir(char s[255])
{
	int numar = 0;
	for (int i = 0; i < strlen(s); i++)
		if (s[i] >= '0' && s[i] <= '9')
			numar = numar * 10 + (s[i] - '0');
	return numar;
}
int main()
{
	int s = 0;
	FILE* fisier = fopen("lab1.txt", "r");
	if (!fisier)
	{
		cout << "Nu am putut deschide";
		return -1;
	}
	while (fgets(linie, 255, fisier))
	{
		int valoare = parcurgereSir(linie);
		//cout << valoare<< endl;
		s = s + valoare;

	}
	cout << s << ' ';
	fclose(fisier);

	return 0;
}


///////////////////////////////////////////////////////////
//PROBLEMA 2 LABORATOR 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
char s[256], v[256][256], n, i;

void sort(char v[256][256], int n)
{
	bool ok;
	do
	{
		ok = true;
		for (int i = 0; i < n; i++)
		{
			if (strlen(v[i]) < strlen(v[i + 1]))
			{
				swap(v[i], v[i + 1]);
				ok = false;
			}
			else  if (strlen(v[i]) == strlen(v[i + 1]))
			{
				if (strcmp(v[i], v[i + 1]) > 0)
				{
					swap(v[i], v[i + 1]);
					ok = false;
				}
			}
		}
	} while (!ok);
}

int main()
{
	scanf("%[^\n]s", s);
	char* p;
	p = strtok(s, " ");
	while (p)
	{
		strcpy(v[++n], p);
		p = strtok(NULL, " ");
	}
	sort(v, n);
	for (i = 0; i <= n; i++)
		printf("%s \n", v[i]);

}

///////////////////////////////////////////////
//PROBLEMA 4 LABORATOR 1




#include <iostream>

using namespace std;



bool isPrime(int n)

{
	if (n < 2) return false;

	for (int tr = 2; tr < n / 2; tr++)

		if ((n % tr) == 0)

			return false;

	return true;

}

int main()
{
	int n;
	std::cout << "Enter a number:";
	std::cin >> n;
	if (isPrime(n))
		std::cout << n << " is prime !";
	else
		std::cout << n << " is NOT prime !";

	return 0;

}