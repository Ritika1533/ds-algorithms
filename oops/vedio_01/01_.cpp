#include <iostream>
using namespace std;
class Student
{
    // class creation
public:
    string name;
    int age;
    int id;
};
int main()
{
    // object creation
    Student s;
    s.age = 67;
    s.name = "Raj";
    s.id = 6758;
    cout << s.name << " " << s.age << " " << s.id << endl;
}