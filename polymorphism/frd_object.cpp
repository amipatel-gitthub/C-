#include<iostream>
using namespace std;
class Area
{
    int l,b;

    public:
        void setdata(int x, int y)
        {
            l = x;
            b = y;
        }
        void getdata()
        {
            cout<<"Rectangle Area : "<<l*b<<endl;
        }
        friend Area krish(Area, Area);
};

Area krish(Area x, Area y)
{
    Area t;

    t.l = x.l + y.l;
    t.b = x.b + y.b;

        return t;
}
int main()
{
    Area a,b,c;

    a.setdata(2,3);
    a.getdata();

    b.setdata(4,5);
    b.getdata();

    c = krish(a,b);
    c.getdata();
}