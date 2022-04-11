#include <iostream>
using namespace std;
class Ovr
{
    public:
    int a,b;
   Ovr(int x, int y)
   {
       a = x;
       b = y;
   }
  void operator +()
  {
    cout << "SUM of "<< a << " and "<< b;
  }
};
int main()
{
    int x = 5,y = 6;
    Ovr s(x,y);
    +s;
}