#include<iostream>
using namespace std;

class area
{
    public:

        void area_shape(double r)
        {
            cout<<"Area of Circle : "<<3.14*r*r<<endl;
        }

        void area_shape(double l, double br)
        {
            cout<<"Area of Rectangle :"<<l*br<<endl;
        }

        void area_shape(int s)
        {
            cout<<"Area of Square : "<<s*s<<endl;
        }

        void area_shape(int b, int h)
        {
            cout<<"Area of Triangle : "<<(0.5)*b*h<<endl;
        }
};

int main()
{
    area a;
    a.area_shape(10);
    a.area_shape(5,10); 
    a.area_shape(7);
    a.area_shape(5,3);
    return 0;
}
