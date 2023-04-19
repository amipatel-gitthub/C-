#include<iostream>
using namespace std;
class base
{
    public:
        base()
        {
            cout<<"Base constructor is called..."<<endl;
        }
    
};

class abc : public base
{
    public:
     
    abc()
    {
       cout<<"ABC constructor is called..."<<endl; 
    }
};

class xyz : public base 
{
     public:
    xyz()
    {
       cout<<"XYZ constructor is called..."<<endl; 
    } 
};



int main()
{
    abc b;
    xyz a;
    return 0;
}