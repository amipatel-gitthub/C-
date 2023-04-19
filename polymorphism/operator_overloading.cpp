#include<iostream>
using namespace std;

class box
{
    int l,b,h;

    public:
        void setdata(int len, int bre, int hei)
        {
            l = len;
            b = bre;
            h = hei;
        }

        int getdata()
        {
            return l*b*h;
        }

        box operator+ (box &a)
        {
            box t;

            t.l = l + a.l;
            t.b = b + a.b;
            t.h = h + a.h;

            return t;
        }
};

int main()
{
    int vol = 0;
    box a,b,c;

    a.setdata(2,2,2);
    vol = a.getdata();
    cout<<"Volume of Box A is : "<<vol<<endl;

    b.setdata(3,3,3);
    vol = b.getdata();
    cout<<"Volume of Box B is : "<<vol<<endl;

    c = a+b;
    vol = c.getdata();
    cout<<"Volume of Box C is : "<<vol<<endl;

    return 0;

}