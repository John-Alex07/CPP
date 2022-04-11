#include <iostream>
using namespace std;
inline long Pow(int n, int p)
{
    if(p)
    return n*Pow(n,p-1);
    else
    return 1;
}
int main()
{
    int n,p;
    cout << "ENTER A NUMBER AND A POWER\n";
    cin >> n >> p;
    cout << Pow(n,p);
}