#include<iostream>
using namespace std;

class box
{
    int l,b;
    public:
        void setdata()
        {
            cout<<"Enter number : ";
            cin>>l;

            cout<<"Enter number : ";
            cin>>b;
        }

        void getdata()
        {
            cout<<"Area of Triangle : "<<l*b;
        }

        box operator++()
        {
            box t;

            t.l = ++l;
            t.b = ++b;

            cout<<"\n Len : "<<t.l<<endl;
            cout<<"\n wid : "<<t.b<<endl;

            return t;
        }
};

int main()
{
    box a;

    a.setdata();
    cout<<"Before increment...."<<endl;
    a.getdata();

    ++a;
    cout<<"\n After increment...."<<endl;
    a.getdata();

    return 0;
}