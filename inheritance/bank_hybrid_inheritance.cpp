#include <iostream>
using namespace std;

class bank{};

class saving : public bank
{
    int bal;

public:
    saving()
    {
        bal = 1000;
    }
    void s_dep(int n)
    {
        bal = bal + n;
    }
    void s_with(int n)
    {
        if (bal >= n)
            bal = bal - n;
        else
            cout << "you don't have money to withdfraw :-( ";
    }
    int s_show()
    {
        return bal;
    }
};

class current : public bank
{
    int bal;

public:
    current()
    {
        bal = 50000;
    }
    void c_dep(int n)
    {
        bal = bal + n;
    }
    void c_with(int n)
    {
        if (bal >= n)
            bal = bal - n;
        else
            cout << "you don't have money to withdfraw :-( ";
    }
    int c_show()
    {
        return bal;
    }
};

class person : public saving , public current
{
public:
    person()
    {
        cout << "=== WELCOME TO OUR BANK ===" << endl;
        cout << "======================================" << endl;
    }

    ~person()
    {
        cout << "======================================" << endl;
        cout << "=== THANK YOU ===" << endl;
    }
};

int main()
{
    person b;
    //current i;
   // saving s;

    int ch, a, amt;
    cout << "\n1.saving\n2.current\n";

    cout << "enter account type : ";
    cin >> ch;

    if (ch == 1 || ch == 2)
    {

        cout << "\n1.deposite\n2.withdraw\n3.showbalance\n4.swapaccount\n0.exit";
        while (a != 0)
        {
            cout << "\nenter your choice : ";
            cin >> a;

            switch (a)
            {
            case 1:
                cout << "enter amount for deposite : ";
                cin >> amt;

                if (ch == 1)
                    b.s_dep(amt);
                else
                    b.c_dep(amt);
                break;


            case 2:
                cout << "enter amount for withdraw : ";
                cin >> amt;

                if (ch == 1)
                    b.s_with(amt);
                else
                    b.c_with(amt);
                break;

            case 3:
                if (ch == 1)
                    cout << "your saving account balance is : " << b.s_show();
                else
                    cout << "your current account balance is :" << b.c_show();
                break;

            case 4:
                if (ch == 1)
                    ch = 2;
                else if (ch == 2)
                    ch = 1;
                break;

            case 0:
                break;

            default:
                cout << "your choice is wrong : ";
                break;
            }
        }
    }
}