#include <iostream>
#include "Compare.h"
#include "ArrayIterator.h"
#include "Array.h"


int main() {
    Array<int> a(100);
    try
    {
        a += 3;
        a += 4;
        a += 5;
        a += 6;
    }
    catch (const char* txtException)
    {
        cout << "Exception " << txtException << endl;
    }
    return 0;
}