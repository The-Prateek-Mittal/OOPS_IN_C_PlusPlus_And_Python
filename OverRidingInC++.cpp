#include<iostream>
using namespace std;
class employee // This is Base Class.
{
    public :
    int id;
    string name;
    employee(int id, string name)
    {
        this->id = id;
        this->name =name;
    }
    void display()
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;

    }
};

class manager : public employee // This is Public inheritence (Now manager class will have access to all the elements of public in employee class)
// Syntax for private inheritence: class manager : private employee()
// This is a Derived Class.
{
    public :
    string department;
    manager(int id, string name, string department) : employee(id, name) //Constructor can be accessed anyway irrespective of type of inheritence.
    {
        this->department = department;

    }
    void display()
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<department<<endl;

    }
   
};

int main()
{
    manager m1(1,"John","HR");
    m1.display();
    return 0;
}
// You can access private things using public methods by simply calling them.