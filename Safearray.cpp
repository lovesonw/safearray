#include "Safearray.h"
#include <iostream>

using namespace std;

Safearray::Safearray()
{
    Size = 0;
}

void Safearray::Setvalue(int a)
{
    value[Size] = a;
    Size++;
}

int Safearray::Getvalue(int i)
{
    return value[i];
}

int Safearray::Getsize()
{
    return Size;
}
