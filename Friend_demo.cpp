#include <iostream>
using namespace std;
class Person;
class Temp
{
    string s = " John ";
    friend void display(Person P, Temp N);
};
class Person
{
    int age = 20;
    friend void display(Person P, Temp N);
};
void display(Person P, Temp N)
{
    cout << "AGE : "<< P.age << endl;
    cout << "NAME : " << N.s;
}
int main()
{
    Person P;
    Temp N;
    display(P,N);
}