#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout<<"Base constructor...."<<endl;
        }00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000                                                       hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

        ~base()
        {
            cout<<"Base Destructor...."<<endl;
        }
};

class derived : public base
{
    public:
        derived()
        {
            cout<<"Derived constructor..."<<endl;
        }

        ~derived()
        {
            cout<<"Derived destructor..."<<endl;
        }
};

int main()
{
    derived x;
}