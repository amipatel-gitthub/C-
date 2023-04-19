#include<iostream>
using namespace std;

class conover
{
    public:
        conover()
        {
            cout<<"Defult constructor..."<<endl;
        }

        conover(int a)
        {
            cout<<"parameterized constructor... int : "<<a<<endl;
        }

        conover(int x, int y)
        {
            cout<<"parameterized constructor... int : "<<x+y<<endl;
        }
        conover(char ch)
        {
            cout<<"parameterized constructor... "<<ch<<endl;
        }

};

int main()
{
    conover a,b(10),c(10,20),d('a');
    return 0;
}
