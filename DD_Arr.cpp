#include <iostream>
using namespace std;
class Arr
{
    public:
    int **x;
    Arr(int **a)
    {
      for(int i = 0;i<2;i++)
      a[i] = new int[2];
      x = a;
    }
    void arr()
    {
        for(int i = 0;i<2;i++)
        for(int j = 0;j<2;j++)
        cin >> x[i][j];
    }
};
int main()
{
    int **a = new int*[2];
    Arr ar(a);
    ar.arr();
}