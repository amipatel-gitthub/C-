#include<iostream>
using namespace std;

class base
{
    public :
        virtual void display()
        {
            cout<<"Base class display function called....";
        }
};

class derived : public base
{
    public:
        void display()
        {
            cout<<"derived class display function...";
        }
};

int main()
{
    base *p;
    base b;
    derived d;

    p = &b;
    p -> display();

    p = &d;
    p -> display();

}