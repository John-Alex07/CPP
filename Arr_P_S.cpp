#include <iostream>
#include <stdlib.h>
using namespace std;
void print_1d(int *ar, int n)
{
    for(int i = 0;i<n;i++)
    cout << *(ar+i) << "\n";
}
void print_2d(int **ar, int r, int c)
{
    int sum = 0;
    for(int i = 0;i<r;i++)
     for(int j = 0;j<c;j++)
     sum = sum + ar[i][j];
    
    cout << "SUM : " << sum;
}
int main()
{
    int a[10];
    int *p = a;
    cout << "INPUT 5 numbers\n";
    for(int i = 0;i<5;i++)
    cin >> *(p+i);
    print_1d(p,5);
    

    cout << "Enter 4 numbers\n";
    int** arr = new int*[5];                

     for(int i=0; i<5; i++)
        arr[i] = new int[2];
     
     for(int i=0; i<2; i++)
         for(int j=0; j<2; j++)
             cin >> arr[i][j];
    print_2d(arr,2,2);
}