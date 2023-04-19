#include<iostream>
using namespace std;

class box
{
    int x,y;

    public:
        void setdata(int len, int br)
        {
            x = len;
            y = br;
        }

        int add()
        {
            return x + y;
        }
        box operator+ (box &a)
        {
            box t;

            t.x = x + a.x;
            t.y = y + a.y;
           
            return t;
        }
        int sub()
        {
            return x - y;
        }
        box operator- (box &a)
        {
            box t;

            t.x = x - a.x;
            t.y = y - a.y;
           
            return t;
        }

        int mul()
        {
            return x * y;
        }
        box operator* (box &a)
        {
            box t;

            t.x = x * a.x;
            t.y = y * a.y;
           
            return t;
        }

         int diiv()
        {
            return x / y;
        }
        box operator/ (box &a)
        {
            box t;

            t.x = x / a.x;
            t.y = y / a.y;
           
            return t;
        }
};

int main()
{
    int vol = 0;
    box a,b,c,d,e,f;

    a.setdata(8,3);
    vol = a.add();
    cout<<"Volume of Box A is : "<<vol<<endl;

    b.setdata(2,2);
    vol = b.add();
    cout<<"Volume of Box B is : "<<vol<<endl;

    c = a+b;
    vol = c.add();
    cout<<"Addition : "<<vol<<endl;

    d = a-b;
    vol = d.sub();
    cout<<"substraction : "<<vol<<endl;

    e = a*b;
    vol = e.mul();
    cout<<"Multiplication : "<<vol<<endl;

    f = a/b;
    vol = f.diiv();
    cout<<"Division : "<<vol<<endl;

    return 0;

}