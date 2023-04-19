#include<iostream>
using namespace std;

class volume
{
    public:
        void conover()
        {
            cout<<"default constructor....."<<endl;
        }

        void conover(int s)
        {
            cout<<"Parameterized constructor... int : "<<s<<endl;
        }

        void conover(int x, int y)
        {
            cout<<"Parameterized constructor.... "<<x+y<<endl;
        }

        void conover(char ch)
        {
            cout<<"Parameterized constructor... ch : "<<ch<<endl;
        }
}; 

int main()
{
    volume b;
    b.conover();
    b.conover(5);
    b.conover(15,5);
    b.conover('a');

    return 0;
}