#include <iostream>
using namespace std;
class Age
{
    public:
    int age;
    
    Age()
    {
        cout << "Enter the Age of A Person\n";
        cin >> age;
    }
    friend int operator+(Age&, Age&);
};
int operator +(Age &P1, Age &P2)
{    
    int P = P1.age + P2.age;
    return P; 
}
int main()
{
    Age P1;
    Age P2;
    int P = P1 + P2;
    cout << "AGE : "<< P;       
}