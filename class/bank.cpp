#include <iostream>
using namespace std;

class bank
{
    int balance = 1000;

public:
    bank()
    {
        cout << "\n\t\t' Welcome to City Bank '" ;
        cout<<"\n\t --------------------------------"<< endl;
        cout << "\t 1.Deposite";
        cout << "\n\t 2.withdraw";
        cout << "\n\t 3.show";
        cout << "\n\t 0.Exit";
        cout<<"\n\t --------------------------------"<< endl;
    }
    void deposite(int a)
    {
        balance = balance + a;
    }

    void withdraw(double b)
    {
        if (b > balance)
        {
            cout << "\n\t Sorry you Entered large amount than balance" << endl;
        }
        else
        {
            balance = balance - b;
        }
    }


    void show()
    {
        cout << "\n\t Your current balance is...." << balance << endl;
    }

   ~bank()
   {
       cout<<"\n\t ---------------------------------";
       cout<<"\n\t\t Thank you for visiting...."<<endl;
  }
};

int main()
{
    bank t;
    int ch, a;

    do
    {

        cout << "\n\tEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\tEnter Deposite Amount : "  ;
            cin >> a;
            t.deposite(a);
            break;

        case 2:
            cout << "\n\tEnter Withdraw Amount : "  ;
            cin >> a;
            t.withdraw(a);
            break;

        case 3:
            t.show();
            break;

        case 0:
            break;
        }
    } while (ch != 0);

    return 0;
}