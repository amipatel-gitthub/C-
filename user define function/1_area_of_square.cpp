//1. area of square and perameter of square

#include<iostream>
using namespace std;

int prt(int l)
{
    int pr;

     pr = l * 4;
     cout<<"\n Parameter of Square : "<<pr;
}

int sqr()
{
    int l,area;

    cout<<"Enter area of length : ";
    cin>>l;

    area = l*l;
    cout<<"Area of square : "<<area;

    prt(l);
}


int main()
{
    sqr();
    //prt();
}