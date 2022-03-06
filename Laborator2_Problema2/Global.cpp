//implementare functii globale
#define _CRT_SECURE_NO_WARNINGS
#include "Global.h"
#include<cstring>
int ComparaNume(Student a, Student b)
{
	if (strcmp(a.GetName(), b.GetName()) == 0)
		return 0;
	else if (strcmp(a.GetName(), b.GetName()) > 0)
		return 1;
	else return -1;
}

int ComparaMate(Student a, Student b)
{
	if (a.GetNotaMate() == b.GetNotaMate())
		return 0;
	else if (a.GetNotaMate() > b.GetNotaMate())
		return 1;
	else return -1;

}

int ComparaIstorie(Student a, Student b)
{
	if (a.GetNotaIstorie() == b.GetNotaIstorie())
		return 0;
	else if (a.GetNotaIstorie() > b.GetNotaIstorie())
		return 1;
	else return -1;
}

int ComparaEngleza(Student a, Student b)
{
	if (a.GetNotaEngleza() == b.GetNotaEngleza())
		return 0;
	else if (a.GetNotaEngleza() > b.GetNotaEngleza())
		return 1;
	else return -1;
}

int ComparaMedie(Student a, Student b)
{
	if (a.GetNotaMedie() == b.GetNotaMedie())
		return 0;
	else if (a.GetNotaMedie() > b.GetNotaMedie())
		return 1;
	else return -1;
}
