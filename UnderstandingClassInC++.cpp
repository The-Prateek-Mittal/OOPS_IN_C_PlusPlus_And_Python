#include<iostream>
#include<string>
using namespace std;
class student
{
    private : // private things can only be accessed using public things in main function.
    int marks;
    int roll_numbers;
    char grades;
    float percentage;
    string str1;

    void greet(void)
    {
        cout<<"hello, Sam Narayan"<<endl;
    }
    public : // public things can be accessed from main function.
    void set_value(int a,int b,char c,float d,string e){
        marks = a;
        roll_numbers = b;
        grades = c;
        percentage = d;
        str1 = e;
    }
    void get_value(void){
        greet();
        cout<<"Roll number is : "<<roll_numbers<<" Marks :"<<marks<< " Grades :"<<grades<< " Percentage :"<<percentage<< " Remarks : "<<str1<< endl;
        //cout is used in place of printf in C
        //C++ do not have format specifiers it takes directly the variables 

    }
    
};
int main()
{
    student s1;
    s1.set_value(34,54,'A',94.2,"Good Boy.");
    s1.get_value();
    return 0;
}