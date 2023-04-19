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

        friend box operator+(box a);
       
};

box operator+(box a)
{
    box t;

        t.l = ++a.l;
        t.w = ++a.w;
        t.h = ++a.h;

        return t;
}

int main()
{
    box a;

    cout<<"Before Increament..."<<endl;

    a.setdata(2,2,2);    
    cout<<"Volume of Box A : "<<a.getdata()<<endl;
   // a.getdata();
    
   // ++a;
   
    cout<<"\n After increment...."<<endl;
    a.getdata();

    return 0;
}