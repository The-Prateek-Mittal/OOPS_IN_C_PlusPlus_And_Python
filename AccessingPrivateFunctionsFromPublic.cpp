#include<iostream>
using namespace std;
class name
{
    private : 
    void greet()
    {
        cout<<"Hello from Private"<<endl;
    }
    public :
    void greet1()
    {
        cout<<"Hello from public"<<endl;
    }
    void greet2()
    {
        greet();
    }
};
int main()
{
    name n1;  // Creating something like function pointer.
    n1.greet2();
    n1.greet1();
    return 0;
}