#include <iostream>
using namespace std;
class Cons
{
    public:
    int *a,b;

    Cons()
    {
        b = 0;
        a = &b;
    }
    Cons(Cons &Con)
    {
        b = 1;
        a = &b;
    }
};
int main()
{
    Cons C;
   Cons c = C;
    cout << *(C.a) << C.b << endl;
    cout << *(c.a) << c.b;
}