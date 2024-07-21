#include <iostream>
using namespace std;
class Student
{
    // class creation
    string name;
    int age;
    int id;

public:
    void setName(string name)
    {
        if (name.size() == 0)
        {
            return;
        }
        else
        {
            this->name = name;
        }
    }
    void setAge(int age)
    {
        if (age < 18)
        {
            return;
        }
        else
        {
            this->age = age;
        }
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    // object creation
    Student s;
    s.setAge(9);
    s.setName("");

    cout << "Name : " << s.getName() << endl;
    cout << "Age : " << s.getAge() << endl;

    return 0;
}