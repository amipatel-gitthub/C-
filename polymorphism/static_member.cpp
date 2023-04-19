#include<iostream>
using namespace std;
class bank
{
    int bal,acc;
    string name;

    public:
        static int count;

    bank(string name, int bal, int acc)
    {
        this -> name = name;
        this -> bal = bal;
        this -> acc = acc;

        count++;
    }

    void getdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Account : "<<acc<<endl;
        cout<<"Balance : "<<bal<<endl;
    }
    static int object()
    {
        return count;
    }
};

int bank :: count;

int main()
{
    bank x("om",50000,101);
    bank y("som",40000,202);
    bank z("mom",20000,303);

    x.getdata();

    cout<<"Total number : "<<bank::object();
}