#include <iostream>
using namespace std;

class bank
{
    int balance = 1000;

public:
    void deposite(int a)
    {
        //cout << "Enter Deposite Amount : " << endl;
        //cin >> a;

        balance = balance + a;
       // cout << "\n\t Your current balance is...." << balance << endl;
    }

    void withdraw(double b)
    {
        //cout << "Enter Withdraw Amount : " << endl;
       // cin >> b;

        
        if (b > balance)
        {
            cout << "\n\t Sorry you Entered large amount than balance" << endl;
        }
        else
        {
            balance = balance - b;
            //cout << "\n\t Your current balance is...." << balance << endl;
        }
    }

    void show()
    {
       cout << "\n\t Your current balance is...." << balance << endl; 
    }
};

int main()
{
    int ch,a;
    cout<<" 1.Deposite";
    cout<<"\n 2.withdraw";
    cout<<"\n 3.show";

    cout<<"\n\t Enter your choice : ";
    cin>>ch;

    bank t;