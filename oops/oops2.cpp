/*  LUV BABBER -- > OOPS */

/*  Four Pillars of Object Oriented Porgramming:
    1. Abstraction
    2. Encapsulation
    3. Inheritance
    4. Polymorphism
*/

#include <string>
#include <iostream>
using namespace std;

// ENCAPSULATION
class Employee
{
    string name = "ram";
    int age = 9;

public:
    void getData(int password)
    {
        if (password == 123)
        {
            cout << "name : " << this->name << endl;
            cout << "age : " << this->age << endl;
        }
    }
};

// INHERITANCE
/*
    Types:
    1.single
    2.multi-level
    3.miltiple
    4.hybrid
 */
class Animal
{
public:
    void bark()
    {
        cout << "yes i bark" << endl;
    }
};
class Human
{
public:
    int height;
    int weight;
    int getHeight()
    {
        return this->height;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    Human()
    {
        height = 5;
        weight = 67;
    }
    void speak()
    {
        cout << "yes i speak" << endl;
    }
};

// single inheritance
class Male : public Human
{
public:
    string color;
    void work()
    {
        cout << "yes i work" << endl;
    }
};
// multi level inheritance
class Ram : public Male
{
public:
    string name;
    void sleep()
    {
        cout << "yes i sleep" << endl;
    }
};
// multiple inheritance
class Hybrid : public Animal, public Human
{
public:
    void nature()
    {
        cout << "i bark and speak both" << endl;
    }
};
// herichical inheritance
class Dog : public Animal
{
    void leg()
    {
        cout << "have 4 legs" << endl;
    }
};
class Cat : public Animal
{
    void drinkMilk()
    {
        cout << "yes i drink milk" << endl;
    }
};

// MAIN FUNCTION
int main()
{
    // encapsulation
    Employee e1;
    e1.getData(123);
    // inheritance
    Male m1;
    m1.setWeight(77);
    cout << m1.getHeight() << " feet" << endl;
    m1.work();
    Ram r1;
    cout << r1.height << endl;
    Hybrid h1;
    h1.bark();
    h1.speak();
    h1.nature();
}