#include<iostream>
using namespace std;

class StackInt
{
private:
    int *data;
    int size_t;
    int capacity;
    int top;
public:
    StackInt(int cap):size_t(0),capacity(cap)
    {
        top = -1;
        data  = new int[capacity];
    }

    ~StackInt() {
        delete []data;
    }

    StackInt(const StackInt& rhs)
    {
        cout << "Copy constructor called" << endl;
        this->size_t   = rhs.size_t;
        this->capacity = rhs.capacity;
        this->top      = rhs.top;
        this->data     = new int[this->size_t];
        for(int i = 0 ; i <= top; i++)
        {
            data[i] = rhs.data[i];
        }
    }

    int size() const { return size_t; }

    bool empty() const { return (top == -1); }

    bool full() const  { return top == (capacity - 1); }

    void push_back(const int& val)
    {
        if(full())
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            data[top] = val;
            size_t++;
        }
    }

    void pop_back()
    {
        if(empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            top--;
            size_t--;
        }
    }

    int topValue() const { return data[top]; }

    void displayStack() const {
        for(int i = 0; i <= top; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void display(StackInt obj)
    {
        while(!obj.empty())
        {
            cout << obj.topValue() << " ";
            obj.pop_back();
        }
        cout << endl;
    }
};

int main()
{
    StackInt q(5);

    q.pop_back();

    q.push_back(6);
    q.push_back(7);
    q.push_back(8);
    q.push_back(9);
    q.push_back(10);

    cout << q.size() << endl;

    q.displayStack();

    q.push_back(11);
    q.displayStack();

    cout << q.topValue() << endl;

    q.pop_back();
    q.pop_back();
    q.displayStack();
    cout << q.size() << endl;
    cout << q.topValue() << endl;

    q.display(q);

    return 0;
}
