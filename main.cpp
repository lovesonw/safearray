#include <iostream>
#include <Safearray.h>

using namespace std;

int main()
{
    Safearray A;
    int a;
    while (1)
    {
        cin >> a;
        if (A.Getsize() < MAX)
            A.Setvalue(a);
        else
        {
            cout << "Array is Full" << endl;
            break;
        }
    }
    for (int i=0; i<A.Getsize(); i++)
        cout << A.Getvalue(i) << endl;
    return 0;
}
