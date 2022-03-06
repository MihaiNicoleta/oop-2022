#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "Global.h"
#include<iostream>
using namespace std;
int main()
{
    Student a;
    Student b;
    a.SetName("Alex");
    b.SetName("Ana");
    a.SetNotaEngleza(8);
    b.SetNotaEngleza(9);
    a.SetNotaIstorie(10);
    b.SetNotaIstorie(9);
    a.SetNotaMate(7);
    b.SetNotaMate(7);
    a.SetNotaMedie();
    b.SetNotaMedie();
   std:: cout << ComparaEngleza(a,b) << endl;
   std::cout << ComparaIstorie(a, b) << endl;
   std::cout << ComparaMate(a, b) << endl;
   std::cout << ComparaMedie(a, b) << endl;
   std::cout << ComparaNume(a, b) << endl;


}
