#include<iostream>
using namespace std;

class base1
{
    public :
        int a;

    void setbase1()
    {
        cout<<"Enter a : ";
        cin>>a;
    }

    void getbase1()
    {
        cout<<"Value of a : "<<a<<endl;
    }
};

class base2 : public base1
{
    public : 
        int b;

    void setbase2()
    {
        cout<<"Enter b : ";
        cin>>b;
    }

    void getbase2()
    {
        cout<<"Value of B : "<<b<<endl;
    }
};

class derived : public base2
{
    public : 
        int c;

    void setderived()
    {
        setbase1();
        setbase2();

        cout<<"Enter c : ";
        cin>>c;
    }

    void getderived()
    {
        getbase1();
        getbase2();

        cout<<"Value of c : "<<c<<endl;
    }
    void calc()
    {
        cout<<"Product of A,B & C : "<<(a*b*c)<<endl;
    }
};

int main()
{
    derived a;

        a.setderived();
        a.getderived();
        a.calc();
}
