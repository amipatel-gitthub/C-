#include<iostream>
using namespace std;

class base
{
    public:
        int a;

        void setbase()
        {
            cout<<"Enter A : ";
            cin>>a;
        }

        void getbase()
        {
            cout<<"Value of A : "<<a<<endl;
        }
};

class derived : public base
{
    int b;

    public:
        void setderived()
        {
            setbase();

            cout<<"Enter B : ";
            cin>>b;
        }

        void getderived()
        {
            getbase();

            cout<<"Value of B : "<<b<<endl;
        }
        void cal()
        {
            cout<<"Product of A & B : "<<a*b<<endl;
        }
};

int main()
{
    derived x;

    x.setderived();
    x.getderived();
    x.cal();
}
