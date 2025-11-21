#include<iostream>
using namespace std;
class stack
{
    private :
    int *arr;
    int capacity;
    int top;

    public :
    stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
        cout<<"Stack of Size " <<capacity<<" integers has been created"<<endl;

    }
    void pop(void)
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else 
        {
            cout<<arr[top]<<" will be deleted from the stack."<<endl;
            top = top -1;
        }
    }
    void push(int x)
    {
        if(top==capacity-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            arr[++top] = x;
        }
        
    }
    int top_element(void)
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        return arr[top];
        
    }
    void show(void)
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;

        }
        else
        {
            for(int i =0; i<=top;i++)
            {
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
        }
    }
    ~stack(void)
    {
        delete[] arr;
        cout<<"stack has been deleted"<<endl;
    }
    
};
int main()
{
    stack s1(5);
    s1.push(1);
    s1.push(20);
    s1.push(3);
    s1.show();
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.pop();
    s1.pop();
    cout<<"Something new"<<endl;
    {
        cout<<"New Scope"<<endl;
        stack s2(5);
        s2.push(5);
        s2.push(4);
        s2.pop();
        s2.pop();
        s2.show();
        cout<<"going out of scope"<<endl;
    }
    cout<<"wertyuiop"<<endl;

   return 0;
}