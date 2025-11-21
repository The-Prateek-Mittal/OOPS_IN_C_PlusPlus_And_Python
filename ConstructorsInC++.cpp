#include<iostream>
using namespace std;
class rectangle
{
    int len;
    int width;
    

    public:
          rectangle(int a, int b) //Constructor (difference from the function is it does not have the return type)
          {
            len = a;
            width = b;
            cout<<"New Object has beeen created"<<endl;

          }

         void get_value(void)
          {
             cout<<"Length : "<<len<<" Width : "<<width<< " Area : "<<len*width<<endl;
          }       
          rectangle(int a){
            len = a;
            width = 10;
          }
          rectangle(void)
          {
            cout<<"Enter the Length : "<<endl;
            cin>>len;  //Note the ">>" difference between cin and cout
            cout<<"Enter the Width : "<<endl;
            cin>>width;

          }

};
int main()
{
    rectangle r1(4,5);
    r1.get_value();
    rectangle r2(10);
    r2.get_value();
    rectangle r3; //not having parenthesis here 
    r3.get_value();
    
    return 0;
}
