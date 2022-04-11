#include <iostream>
using namespace std;
class Op_Ovr1
{
    public:
    int a;
    Op_Ovr1()
    {
      a = 0;
    }
    Op_Ovr1(int x)
    {
      a = x;
    }
    friend Op_Ovr1 operator /(Op_Ovr1 &obj, Op_Ovr1 &obj1);
};
Op_Ovr1 operator /(Op_Ovr1 &obj, Op_Ovr1 &obj1)
{
    Op_Ovr1 ob;
    if((obj1.a == 0 && obj.a == 0) || obj1.a == 0)
    {
        cout << "EXCEPTION";
        exit(0);
    }
    else
    ob.a = obj.a/obj1.a;
    return ob;
}
int main()
{
    int x = 6;
    Op_Ovr1 obj(x);
    Op_Ovr1 obj1(8);
    Op_Ovr1 O = obj/obj1;
    cout << O.a;
}