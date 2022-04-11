#include <iostream>
#include <cstring>
using namespace std;
class Age
{
    string name;
    int age;
    public:
    Age()
    {
        cout << "Enter the name of a person :\n";
        cin >> name;
        cout << "Enter the Age of a person :\n";
        cin >> age;
    }
    friend void comp(Age &P1, Age &P2);
};
void comp(Age &P1, Age &P2)
{
    if(P1.age > P2.age)
    cout << P1.name << " is Elder to " << P2.name;
    else
    if(P1.age < P2.age)
    cout << P1.name << " is Younger to " << P2.name;
    else
    cout << "Equal";
}
int main()
{
    Age P1;
    Age P2;
    comp(P1,P2);
}