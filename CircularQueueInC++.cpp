#include<iostream>
using namespace std;
class queue
{
    private :
    int *arr;
    int capacity;
    int head;
    int tail;

    public :
    queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        head = -1;
        tail = -1;
        cout<<"Queue of Size " <<capacity<<" integers has been created"<<endl;
    }
    void enqueue(int x)
    {
        if((head==-1)&&(tail==-1))
        {
            head = 0;
            tail = 0;
            arr[head] = x;
            cout<<arr[head]<<" has been added to queue."<<endl;
        }
        else if(head == tail)
        {
            cout<<"Queue Overflow"<<endl;
        }
        else
        {
            arr[(++head + 1)%capacity] = x;
        }
    }
    void dequeue(void)
    {
        if((head==-1)&&(tail==-1))
        {
            cout<<"Stack Underflow"<<endl;

        }
        else
        {
            cout<<arr[tail]<<" will be deleted"<<endl;
            tail = (tail+1)%capacity;
        }

    }
    ~queue()
    {
        cout<<"Queue has been deleted"<<endl;
    }
};
int main()
{
    queue q1(3);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
}