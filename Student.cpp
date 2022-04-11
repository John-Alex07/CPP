#include <iostream>
#include <cstring>
using namespace std;
class Student
{
    public:
    char *nm;
    int ag;
    char *g;
    Student()
    {
       nm = NULL;
       ag = 0;
       g = NULL;
    }
    Student(char *name, int age, char *s)
    {
        cout << "Enter NAME, GENDER and AGE :\n";
        cin >> name;
        cin >> s;
        cin >> age;
        nm = (char*)malloc(10*sizeof(char));
        g = (char*)malloc(sizeof(char));
        nm = name;
        ag = age;
        g = s;
        cout << nm << g << ag << endl;
    }
    ~Student()
    { 
        free(nm);
        free(g);
    }
};

int main()
{
    char *n = (char*)malloc(10*sizeof(char));
    int a;
    char *gen = (char*)malloc(sizeof(char));
        Student s1;
        Student s2(n,a,gen);
}