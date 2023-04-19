#include<iostream>
using namespace std;

class cal
{
    int total ;
    public:

        
        void add(int x,int y)
        {
            total = x+y;
            cout<<"Addition : "<<total;
        }

        void sub(int x,int y)
        {
            total = x-y;
            cout<<"\nSubstraction : "<<total;
        }

        void mul(int x,int y)
        {
            total = x*y;
            cout<<"\nMultiplication : "<<total;
        }

        void div(int x,int y)
        {
            total = x/y;
            cout<<"\nDivision : "<<total;
        }

        int getdata()
        {
            return total;
        }
};

int main()
{
    int a,b;
    cal t;
    cout<<"Enter number : ";
    cin>>a;

    cout<<"\nEnter number : ";
    cin>>b;

    t.add(a,b);
    t.sub(a,b);
    t.mul(a,b);
    t.div(a,b);


}

