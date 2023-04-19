#include<iostream>
using namespace std;

class volume
{
    public:
    volume(int a,int b,int c)
    {
        //V = l × w × h
        cout<<"Cuboid : "<<a*b*c<<endl;
    }

    volume(int a)
    {
        //V = a3
        cout<<"Cube : "<<a*a*a<<endl;
    }
    
    volume(float k,int A,int a,int b)
    {
        //V = πr2h
        cout<<"Cylinder : "<<k*A*a*b<<endl;
    }
   
};

int main()
{
    volume a(10,20,30),b(10),c(3.14,5,5,5);
    return 0;
}