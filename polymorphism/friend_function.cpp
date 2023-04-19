#include<iostream>
using namespace std;

class box
{
    int l,w,h;

    public :
        void setdata(int len, int wid, int hei)
        {
            l = len;
            w = wid;
            h = hei;
        }

        int getdata()
        {
            return l * w * h;
        }

        friend box operator+(box a, box b);
       
};

box operator+(box a, box b)
{
    box t;

        t.l = a.l + b.l;
        t.w = a.w + b.w;
        t.h = a.h + b.h;

        return t;
}

int main()
{
    box a,b,c;

    a.setdata(2,2,2);    
    cout<<"Volume of Box A : "<<a.getdata()<<endl;

    b.setdata(3,3,3);    
    cout<<"Volume of Box B : "<<b.getdata()<<endl;

    c = a+b;
    cout<<"Volume of Box C : "<<c.getdata()<<endl;
    

}