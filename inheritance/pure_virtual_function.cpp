#include<iostream>
using namespace std;

class base
{
    public :
        virtual void display()=0;  // pure virtual
        
};

class derived : public base
{
    public:
        void display()
        {
            cout<<"derived class display function called...";
        }
};

int main()
{
    base *p;
    derived d;
    
    p = &d;
    p -> display();

}