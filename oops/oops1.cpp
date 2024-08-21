/*  LUV BABBER -- > OOPS */

#include <iostream>
using namespace std;
#include "Human.cpp"

// class creation
class Hero
{
    // empty class size = 1byte to keep the track
    int health;

public:
    // static member
    static int releaseTime;
    // getter
    int getHealth(int password)
    {
        if (password == 123)
        {
            return health;
        }
        return 0;
    }
    // setter
    void setHealth(int health, int password)
    {
        // uses an incorrect password (129), so the health value is not updated.
        if (password == 123)
        {
            this->health = health;
        }
    }
    void print()
    {
        cout << "health : " << this->health << endl;
    }
    // overwritting default constructor
    Hero()
    {
        cout << "default constructor called" << endl;
    }
    // parametrised constructor
    Hero(int health)
    {
        cout << "Address of this: " << this << endl;
        this->health = health;
    }
    // copy constructor -->inbuilt one present before creating copy constructor
    // when we create copy constructor inbuilt one destroyed
    Hero(Hero &temp)
    {
        cout << "copy constructor" << endl;
        this->health = temp.health;
        // this is pointer temp is object
    }
    // destructor
    ~Hero()
    {
        cout << "destructor called" << endl;
    }
    // static function--> belong to class, access only static member, don't have this keyword
    static int random()
    {
        return releaseTime;
    }
};
// initilising static member
int Hero ::releaseTime = 2;
int main()
{
    Hero Suresh(78);
    Suresh.print();
    // copy constructor
    Hero R(Suresh);
    R.print();

    // copy Assignment constructor
    Hero Ram(23);
    Hero Geeta(21);
    Ram = Geeta;
    cout << "Ram -> ";
    Ram.print();
    // Ram.health=Geeta.health

    // object creation
    // static creation
    Hero h1(44);
    Human h2;
    // h1.setHealth(67, 123);
    cout << "size : " << sizeof(h1) << endl;
    cout << "value of h1 : " << h1.getHealth(123) << endl;
    cout << "address of object h1 : " << &h1 << endl;

    // dynamic creation
    Hero *h3 = new Hero;
    (*h3).setHealth(12, 123);
    cout << "value of h3 : " << (*h3).getHealth(123) << endl;
    // cout << "value of h3 : " << h3->getHealth(123) << endl; another way of writting

    // DESTRUCTOR-->deallocate memory
    // automatically created whhen class is created we can also construct constructor
    // name is same as class, no return type, no parameter

    // static ->destructor called automatically(one time only called when time to destruct)
    Hero Govinda;
    Hero Shyam;
    // dynamic ->we need to call the destructor(one time only called when time to destruct)
    Hero *Kartik = new Hero;
    delete Kartik;

    // STATIC KEYWORD --> belong to class, object not needed to access it
    cout << "release time of a movie : " << Hero ::releaseTime << endl;
    cout << "release time of a movie : " << Govinda.releaseTime << endl;
    Shyam.releaseTime = 7;
    cout << "release time of a movie : " << Govinda.releaseTime << endl;
    cout << "static random function : " << Hero::random() << endl;
    return 0;
}