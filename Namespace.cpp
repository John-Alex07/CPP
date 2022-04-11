#include <iostream>
using namespace std;

namespace s1
{
   int Sum()
   {
       int x,y;
       cout << "INPUT TWO NUMBERS\n";
       cin >> x >> y;
       return x+y;
   }
}
namespace s2
{
    int Sum()
    {
        int x,y;
       cout << "INPUT TWO NUMBERS\n";
       cin >> x >> y;
       return x+y;
    }
}
int main()
{
    int sum1,sum2;
    sum1 = s1::Sum();
    sum2 = s2::Sum();
    cout << "SUM of NAMESPACE s1 : " << sum1 << endl;
    cout << "SUM of NAMESPACE s2 : " << sum2;
}