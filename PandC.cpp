#include <iostream>
#include "Factorial.h"
using namespace std;
using namespace Fact;
int Perm(int n, int r)
{
   return Factorial(n)/Factorial(n-r);
}
int Comb(int n, int r)
{
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}
int main()
{
    int n,r;
    cout << "INPUT n & r\n";
    cin >> n >> r;
    int P = Perm(n,r);
    int C = Comb(n,r);
    cout << "PERMUTATION : " << n << " & " << r <<" : " << P << endl;
    cout << "COMBINATION : " << n << " & " << r <<" : " << C << endl;
}