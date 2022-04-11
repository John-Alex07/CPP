#include <iostream>
using namespace std;
class Sum
{
    public :
    Sum(int &x,int &y)
    {
         cout << "Enter two numbers" << endl;
         cin >> x >> y;
    }
    int sum(int x,int y)
    {
       return (x+y);
    }
    int diff(int x,int y)
    {
        return (x-y);
    }
    int product(int x,int y)
    {
        return x*y;
    }
    int divide(int x,int y)
    {
        return x/y;
    }
};
int main()
{
    int x,y;
    Sum s(x,y);
    cout << s.sum(x,y) << endl;
    cout << s.diff(x,y) << endl;
    cout << s.product(x,y) << endl;
    cout << s.divide(x,y) << endl;
    return 0;
}
