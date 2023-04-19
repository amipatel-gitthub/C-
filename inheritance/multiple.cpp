#include<iostream>
using namespace std;

class base1
{
    public:
        base1()
        {
            cout<<"Base 1 Constructor call..."<<endl;
        }

        ~base1()
        {
            cout<<"Base 1 Destructor call..."<<endl;
        }
};

class base2
{
    public:
        base2()
        {
            cout<<"Base 2 Constructor call..."<<endl;
        }

        ~base2()
        {
            cout<<"Base 2 Destructor call..."<<endl;
        }
};

class derived : public base1, public base2
{
    public:
        derived()
        {
            cout<<"Derived Constructor...."<<endl;
        }

        ~derived()
        {
            cout<<"Derived des Destructor call..."<<endl;
        }
};

int main()
{
    derived a;
}