#include<iostream>
using namespace std;
class bank
{
    int bal, acc;
    string name;

    public:

        bank(string name,int bal,int acc)
        {
            this-> name = name;
            this-> bal = bal;
            this-> acc = acc;
        }

        void getdata()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Account : "<<acc<<endl;
            cout<<"Balance : "<<bal<<endl;
        }
};
int main()
{
    bank x("om",5000,101);
    x.getdata();
}