#ifndef SAFEARRAY_H
#define SAFEARRAY_H

#define MAX 10

class Safearray
{
    public:
                Safearray();
        int     Getsize();
        int     Getvalue(int i);
        void    Setvalue(int a);
    public:
        int value[10];
        int Size;
};

#endif // SAFEARRAY_H
