#include<iostream>
#include<string>
using namespace std;
class employee
{
    int id;
    string name;
    public : 
    employee(int id, string name1)
    {
        this->id = id; //'this' gives the address of the object in the class. (Explicitly using 'this').
        name = name1; //Implicitly calling 'this'.
    }
    void get_details(void);
    void get_details2(void);
    friend void greet_employee(employee t1); // We are here making greet_employee function friend of the class.
   
};
void employee :: get_details(void) //Resolution Scope (Another way to define a method)
{
    cout<<"Id : "<<this->id<<" Name : "<<this->name<<endl;
}
void employee :: get_details2(void)
{
    cout<<"Id : "<<id*id<<" Name : "<<name<<" Sai"<<endl;

}
/*void greet_employee(employee t1)
{
    cout<<"Welcome to Amazon : Mr./Mrs. : "<<t1.name<<endl;
}*/    // It will show error as t1.name is private in the class
void greet_employee(employee t1)
{
    cout<<"Welcome to Amazon : Mr./Mrs. : "<<t1.name<<endl;
}
int main()
{
    employee e1(2,"Tarun");
    e1.get_details();
    e1.get_details2();
    greet_employee(e1);
    return 0;
}