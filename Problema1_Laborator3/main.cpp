#include "Math.h"
#include <iostream>

int main()
{
    std::cout << Math::Add(1, 2) << '\n';
    std::cout << Math::Add(1, 2,3) << '\n';
    std::cout << Math::Add(1.5, 2.5) << '\n';
    std::cout << Math::Add(1.5, 2.5,6.2) << '\n';
    std::cout << Math::Mul(5, 5) << '\n';
    std::cout << Math::Mul(5, 6,2) << '\n';
    std::cout << Math::Mul(1.5, 2.5) << '\n';
    std::cout << Math::Mul(1.5, 2.5, 6.2) << '\n';
    std::cout << Math::Add(7, 1,2,3,4,5,6,7) << '\n';
    std::cout << Math::Add("Maria", "Ioana") << '\n';
}

