#include<iostream>
using namespace std;

class area
{
    public:

        area(double r)
        {
            cout<<"Area of Circle : "<<3.14*r*r<<endl;
        }

        area(double l, double br)
        {
            cout<<"Area of Rectangle :"<<l*br<<endl;
        }

        area(int s)
        {
            cout<<"Area of Square : "<<s*s<<endl;
        }

        area(int b, int h)
        {
            cout<<"Area of Triangle : "<<(0.5)*b*h<<endl;
        }
};

int main()
{
    area a(10), b(5,10), c(7), d(5,3);
    return 0;
}
