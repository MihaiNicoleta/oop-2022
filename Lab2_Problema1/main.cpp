#include "NumberList.h"
#define _CRT_SECURE_NO_WARNINGS


int main() {
    NumberList lista;
    lista.Init();
    lista.Add(5);
    lista.Add(4);
    lista.Sort();
    lista.Print();
    return 0;
}
