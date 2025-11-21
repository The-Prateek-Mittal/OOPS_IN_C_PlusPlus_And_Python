#include<iostream>
using namespace std;
class concatenation 
{
    string str;
    public :
    concatenation(string s1)
    {
        this->str = s1;

    }
    concatenation operator*(concatenation& s2)
    {
       // s2 = this->str + s2.str;
        concatenation result(this->str + s2.str);
        return result;
        //return s2;
    }
    void show_result(void)
    {
        cout<<str<<endl;
    }
    friend concatenation concat(concatenation s3,concatenation s4,int n);
};
concatenation concat(concatenation s3,concatenation s4,int n)
{

    for(int i = 0; i<n;i++)
    {
        s3 = s3*s4;
    }
    return s3;
}
int main()
{
    concatenation s1("");
    concatenation s2("Prateek"); 
    concatenation s3 = concat(s1,s2,5);
    s3.show_result();
    return 0;
}