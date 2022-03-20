#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cstdarg>
#include <stdlib.h>
#include "Sort.h"
#include <iostream>


int main() {

    
    Sort a(10, 30, 60), d(8, 15, 4, 63, 17, 1, 6, 9, 11),
        e("9,4,3,2,5,16,13,19,3,39,58,75,7,9,6,81");
    
    std::cout << "Lungime : " << a.GetElementsCount() << "\n";
    a.InsertSort();
    a.Print();
    std::cout << "\n";

    std::cout << "Lungime : " << a.GetElementsCount() << "\n";
   a.QuickSort();
   a.Print();
   std::cout << "\n";

   std::cout << "Lungime : " << d.GetElementsCount() << "\n";
    d.BubbleSort();
    d.Print();
    std::cout << "\n";

    std::cout << "Lungime : " << d.GetElementsCount() << "\n";
    d.BubbleSort();
    d.Print();
    std::cout << "\n";

    std::cout << "Lungime : " << e.GetElementsCount() << "\n";
    e.QuickSort();
    e.Print();
   std:: cout << "\n";

    return 0;
}
