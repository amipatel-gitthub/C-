#include<iostream>
using namespace std;

class student
{
    int id;
    public:
        int marks;
        void setdata()
        {
            int n;
            cout<<"Enter id : ";
            cin>>n;
            id=n;
        }
        void getdata()
        {
            cout<<"id : "<<id;
        }
};

int main()
{
    student abc,x;

    abc.setdata();
    abc.marks=15;
    abc.getdata();

    cout<<"\n Your mark is : "<<abc.marks;

    return 0;
}