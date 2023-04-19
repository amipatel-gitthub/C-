#include<iostream>
using namespace std;

class complex
{
    int r,i;

    public:
        void getdata()
        {
            cout<<"Complex number is : "<<r<<" + "<<i<<"i"<<endl;
        }

        complex(int real, int img)
        {
            r = real, i=img;
        }

        complex(complex &a)
        {
            r=a.r, i=a.i;
        }
};

int main()
{
    complex a(12,5);
    a.getdata();

    complex b(a);
    b.getdata();
}