#include<iostream>
using namespace std;

class student
{
    int a,b;

    public:
        student();
        student(int x, int y)
        {
            a=x, b=y;
        }
        void getdata();

};

student :: student()
{
    cout<<"\n Hello....";
    a=10,b=20;
}

void student :: getdata()
{
    cout<<"\n A : "<<a<<"\tB : "<<b;
}

int main()
{
    student abc,s(40,50);
    abc.getdata();
    s.getdata();
    return 0;
}


