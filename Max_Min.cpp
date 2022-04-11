#include <iostream>
using namespace std;
class Number
{
    public:
   int l,s;
   void num(int a,int b,int c)
   {
     l = (a > b) ? ((a>c)?a:c) : ((b>c)?b:c);
     s = (a < b) ? ((a<c)?a:c) : ((b<c)?b:c);
     cout << "LARGEST : " << l;
     cout << "\nSMALLEST : " << s;
   }
};
int main()
{
   Number obj;
   int a,b,c;
   cin >> a >> b >> c;
   obj.num(a,b,c);
}