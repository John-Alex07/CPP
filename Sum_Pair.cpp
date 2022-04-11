#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    cout << "Enter 9 numbers in ascending order" << endl;
    int x,*arr = (int*)malloc(sizeof(int)*9);
    for(int i = 0;i<9;i++)
    cin >> *(arr+i);
    cout << "Enter a number" << endl;
    cin >> x;
    int *i = arr;
    int *j = arr+8;
    while(i != j)
    {
        if(*i + *j == x)
        {
            cout << "YES";
            return 0;
        }
        else
        if(*i+*j > x)
        j--;
        else
        i++;
    }
    cout << "NO";
    return 0;
}