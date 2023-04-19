#include<iostream>
using namespace std;

class student
{
    int a,b;
    public:
        student()
        {
            cout<<"\n Hello one....";
            a=10, b=20;
        }

        student(int x, int y)
        {
            a=x, b=y;
        }
        void getdata()
        {
            cout<<"\n A : "<<a<<"\t B : "<<b;
        }
};

int main()
{
    student s(40,50);
    s.getdata();
    return 0;
}
