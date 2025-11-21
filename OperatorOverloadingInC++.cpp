#include<iostream>
using namespace std;
class complex
{
    double a;
    double b;

    public :
    complex(double x, double y)
    {
        this->a = x;
        this->b = y;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    complex operator+(complex& v3) // Operator overloading. V3 have the info about c2.
    // If we have more operands so we can pass more arguments like v4 and so on perator +.
    {
        complex tmp(0,0);
        tmp.a = v3.a + this->a; // It will take this->a from c1.
        tmp.b = v3.b + this->b;
        return tmp;
    }
    complex operator*(complex& v3)
    {
        complex tmp(0,0);
        tmp.a = this->a*v3.a + (this->b*v3.b)*(-1);
        tmp.b = this->a*v3.b + (this->b*v3.a);
        return tmp;
    }
    complex operator-(complex& v3)
    {
        complex tmp(0,0);
        tmp.a = v3.a - this->a; // It will take this->a from c1.
        tmp.b = v3.b - this->b;
        return tmp;
    }
    
};
int main()
{
    complex c1(2,5);
    complex c2(3,6);
    complex c3 = c1 +c2; //c1 is accessed through this-> while operator overloading.
    complex c4 = c1*c2;
    complex c5 = c1-c2;
    cout<<"C1 = ";
    c1.display();
    cout<<"C2 = ";
    c2.display();
    cout<<"Sum of C1 & C2 = ";
    c3.display();
    cout<<"Product of C1 & C2 = ";
    c4.display();
    cout<<"Subtraction of C1 & C2 = ";
    c5.display();
   return 0;

}